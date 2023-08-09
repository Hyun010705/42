/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:33:19 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/09 14:40:14 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*malloc_arr(long num, int len)
{
	char	*arr;
	int		cnt;
	int		flag;

	flag = 0;
	cnt = 0;
	if (num == 0)
	{
		arr = (char *)malloc(sizeof(char) * 2);
		arr[1] = 0;
		return (arr);
	}
	if (num < 0)
		flag = 1;
	while (num != 0)
	{
		num /= len;
		cnt++;
	}
	arr = (char *)malloc(sizeof(char) * (cnt + flag + 1));
	arr[cnt + flag] = 0;
	cnt--;
	if (flag)
		arr[cnt + flag] = '-';
	return (arr);
}

char	*reverse(char *yet_convert)
{
	int	tmp;
	int	idx_f;
	int	idx_l;
	int	num;
	int	cnt;

	cnt = 0;
	while (yet_convert[cnt])
		cnt++;
	idx_f = 0;
	idx_l = cnt - 1;
	num = cnt / 2;
	while (num > 0)
	{
		tmp = *(yet_convert + idx_f);
		*(yet_convert + idx_f) = *(yet_convert + idx_l);
		*(yet_convert + idx_l) = tmp;
		idx_f++;
		idx_l--;
		num--;
	}
	return (yet_convert);
}

char	*input(char *arr, long num, int len, char *base)
{
	int	i;

	i = 0;
	while (num >= len)
	{
		arr[i] = base[num % len];
		num /= len;
		i++;
	}
	arr[i] = base[num % len];
	return (arr);
}
