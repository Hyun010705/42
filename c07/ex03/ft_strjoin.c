/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:38:41 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/08 12:07:28 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		total;
	int		i;

	i = 0;
	if (size == 0)
	{
		arr = (char *)malloc(sizeof(char));
		arr[i] = 0;
		return (arr);
	}
	total = total_len(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * (total + 1));
	arr[i] = 0;
	if (!arr)
		return (0);
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	arr[total] = 0;
	return (arr);
}
