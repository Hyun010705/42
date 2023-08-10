/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwlee3 <jiwlee3@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 07:24:14 by jiwlee3           #+#    #+#             */
/*   Updated: 2023/08/06 16:38:09 by yeoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len ++;
		str ++;
	}
	return (len);
}

int	get_size(char *str)
{
	int	size;

	size = 0;
	while (*str && *str != '\n')
	{
		size ++;
		str ++;
	}
	return (size);
}

char	*ft_strdup(char *src, int size)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (0);
	while (i < size)
	{
		dest[i] = *src;
		i ++;
		src ++;
	}
	dest[i] = '\0';
	return (dest);
}

long long	ft_atoi(char *buf)
{
	long long	flag;
	long long	num;

	flag = 1;
	num = 0;
	while ((9 <= *buf && *buf <= 13) || *buf == 32)
		buf ++;
	if (*buf == '-' || *buf == '+')
	{
		if (*buf == '-')
			flag = -1;
		buf ++;
	}
	while (*buf >= '0' && *buf <= '9')
	{
		num = num * 10 + (*buf - '0');
		buf ++;
	}
	return (flag * num);
}
