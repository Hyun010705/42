/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:12:17 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/02 12:24:18 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ext(char *arr)
{
	int	i;
	int	j;

	if (arr[0] == '\0' || arr[1] == '\0')
		return (0);
	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		if (arr[i] == '-' || arr[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		error;
	int		len;
	long	num;

	num = nbr;
	len = 0;
	error = ext(base);
	if (error == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		while (base[len])
			len++;
		if (len <= num)
		{
			ft_putnbr_base((num / len), base);
			ft_putnbr_base((num % len), base);
		}
		else
			ft_putchar(base[num]);
	}
}
