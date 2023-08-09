/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:43:04 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 21:43:39 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
