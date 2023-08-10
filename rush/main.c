/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeoshin <yeoshin@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:10:12 by yeoshin           #+#    #+#             */
/*   Updated: 2023/08/06 16:37:02 by yeoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init_dictionary(t_dict *dic)
{
	int	i;
	int	num;

	i = -1;
	while (++ i < 21)
		dic[i].key = i;
	num = 30;
	while (num < 101)
	{
		dic[i ++].key = num;
		num += 10;
	}
	dic[29].key = 1000;
	dic[30].key = 1000000;
	dic[31].key = 1000000000;
	dic[32].key = -1;
}

int	exception(int argc, char **argv, char **path, int fd)
{
	if (argc == 1 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if ((argc == 2 && ft_strlen(argv[1]) > 12)
		|| (argc == 3 && ft_strlen(argv[2]) > 12))
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	if (argc == 2)
		*path = ft_strdup("numbers.dict", 12);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			write(1, "Error\n", 6);
			return (1);
		}
		close(fd);
		*path = argv[1];
	}
	return (0);
}

int	exception2(int argc, char **argv)
{
	int	idx;

	idx = 0;
	while (argv[argc - 1][idx])
	{
		if (argv[argc - 1][idx] < '0' || argv[argc - 1][idx] > '9')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		idx ++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		len;
	char	*dict;
	t_dict	dic[33];
	int		is_first[1];
	char	*path;

	path = NULL;
	len = 0;
	if (exception(argc, argv, &path, len))
		return (0);
	if (exception2(argc, argv))
		return (0);
	init_dictionary(dic);
	len = len_dic(path);
	dict = (char *)malloc((sizeof(char)) * (len + 1));
	if (dict == 0)
		return (0);
	set_dict(dict, len + 1, path);
	get_str(dict, dic);
	is_first[0] = 1;
	print_num(ft_atoi(argv[argc - 1]), 1, dic, is_first);
	if (*is_first == 1)
		write(1, "Error", 5);
	write(1, "\n", 1);
	return (0);
}
