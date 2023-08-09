/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:03:10 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 11:02:46 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	cnt;

	idx = 0;
	cnt = 0;
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = 0;
	while (src[cnt])
		cnt++;
	return (cnt);
}
