/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:13:06 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/31 18:32:00 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = 0;
	return (dest);
}
