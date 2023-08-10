/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_setting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwlee3 <jiwlee3@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 07:26:31 by jiwlee3           #+#    #+#             */
/*   Updated: 2023/08/06 16:36:16 by yeoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	get_str(char *buf, t_dict *dic)
{
	char		*value;
	long long	len;
	long long	key;

	while (*buf)
	{
		key = ft_atoi(buf);
		while (*buf != ':')
			buf ++;
		buf ++;
		while ((9 <= *buf && *buf <= 13) || *buf == 32)
			buf ++;
		len = get_size(buf);
		value = ft_strdup(buf, len);
		value = trim(value);
		set_value(key, value, dic);
		free(value);
		buf += len + 1;
	}
}

void	set_dict(char *dict, int size, char *path)
{
	int		idx;
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return ;
	idx = 0;
	read(fd, dict, size - 1);
	dict[size] = '\0';
	close(fd);
}

int	len_dic(char *path)
{
	char	buf[10];
	int		fd;
	int		len;

	len = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, buf, 1))
		len ++;
	close(fd);
	return (len);
}

char	*trim(char *str)
{
	int		idx_s;
	char	*ret_str;
	int		idx_r;

	idx_r = 0;
	idx_s = get_size(str) - 1;
	while ((9 <= str[idx_s] && str[idx_s] <= 13) || str[idx_s] == 32)
		idx_s --;
	ret_str = (char *)malloc(sizeof(char) * (idx_s + 2));
	while (idx_r <= idx_s)
	{
		ret_str[idx_r] = str[idx_r];
		idx_r ++;
	}
	ret_str[idx_r] = '\0';
	free(str);
	return (ret_str);
}

void	set_value(long long num, char *str, t_dict *dic)
{
	int	idx;
	int	len;

	idx = 0;
	len = get_size(str);
	while (dic[idx].key != -1)
	{
		if (dic[idx].key == num)
			dic[idx].value = ft_strdup(str, len);
		idx ++;
	}
}
