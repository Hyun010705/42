/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:38:23 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/09 17:51:36 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	idx;
	int	sign;
	int	num;

	idx = 0;
	sign = 1;
	num = 0;
	while ((str[idx] && 9 <= str[idx] && str[idx] <= 13) || str[idx] == 32)
		idx++;
	while (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while ('0' <= str[idx] && str[idx] <= '9')
	{
	num = num * 10 + (int)(str[idx] - '0');
	idx++;
	}
	return (sign * num);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}
