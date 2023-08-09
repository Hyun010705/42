/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:33:26 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/09 14:40:38 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*malloc_arr(long num, int len);
char	*reverse(char *yet_convert);
char	*input(char *arr, long num, int len, char *base);

int	ext(char *arr)
{
	int	i;
	int	j;

	if (arr[0] == 0 || arr[1] == 0)
		return (0);
	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		if (arr[i] == '-' || arr[i] == '+')
			return (0);
		if ((9 <= arr[i] && arr[i] <= 13) || arr[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	result(char *str, char *base, int len_base)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (base[j] != 0)
		{
			if (str[i] == base[j])
			{
				num = num * len_base + j;
				break ;
			}
				j++;
		}
		if (j == len_base)
			return (num);
		i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	idx;
	int	sign;
	int	num;
	int	len_base;

	idx = 0;
	sign = 1;
	num = 0;
	len_base = 0;
	while ((*str && 9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (base[len_base])
		len_base++;
	return (sign * result(str, base, len_base));
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		cnt;
	int		i;
	long	num;
	char	*arr;

	num = nbr;
	len = 0;
	cnt = 0;
	i = -1;
	while (base[len])
		len++;
	arr = malloc_arr(num, len);
	if (num < 0)
		num *= -1;
	return (input(arr, num, len, base));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*yet_convert;
	int		from_num;

	if (!ext(base_from) || !ext(base_to))
		return (0);
	from_num = ft_atoi_base(nbr, base_from);
	yet_convert = ft_putnbr_base(from_num, base_to);
	return (reverse(yet_convert));
}
