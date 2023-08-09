/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:35:58 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/07 21:04:45 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	valid(int min, int max)
{
	if (min >= max)
		return (1);
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	idx;

	len = 0;
	idx = 0;
	if (valid(min, max))
	{
		*range = 0;
		return (0);
	}
	else
		*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	while (idx < max - min)
	{
		range[0][idx] = min + idx;
		idx++;
	}
	return (max - min);
}
