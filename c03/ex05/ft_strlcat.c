/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:46:21 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 16:53:06 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen1(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	idx++;
	return (idx);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	char			*tmp;
	unsigned int	idx;

	dest_len = ft_strlen1(dest);
	src_len = ft_strlen1(src);
	tmp = dest;
	if (size <= dest_len)
		return (src_len + size);
	else
	{
		while (*dest)
			dest++;
			idx = 0;
		while (*src && idx + dest_len + 1 < size)
		{
			*dest = *src;
			dest++;
			src++;
			idx++;
		}
		*dest = 0;
		return (dest_len + src_len);
	}
}
