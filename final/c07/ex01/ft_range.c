/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:58:27 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/07 21:02:06 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	valid1(int min, int max)
{
	if (min >= max)
		return (1);
	return (0);
}

int	*ft_range(int min, int max)
{
	int	idx;
	int	*arr;

	idx = 0;
	if (valid1(min, max))
		return (0);
	else
		arr = (int *)malloc(sizeof(int) * (max - min));
	while (idx < max - min)
	{
		arr[idx] = min + idx;
		idx++;
	}
	return (arr);
}
