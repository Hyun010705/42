/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:55:46 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 16:52:56 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*tmp;
	unsigned int	idx;

	tmp = dest;
	while (*dest)
		dest++;
	idx = 0;
	while (*src && idx < nb)
	{
		*dest = *src;
		dest++;
		src++;
		idx++;
	}
	*dest = 0;
	return (tmp);
}
