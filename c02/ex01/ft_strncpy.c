/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:38:10 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/31 18:35:00 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx] && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = 0;
		idx++;
	}
	return (dest);
}
