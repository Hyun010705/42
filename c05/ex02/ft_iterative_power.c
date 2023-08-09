/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:33:21 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/02 12:34:03 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		num *= nb;
		power--;
	}
	return (num);
}
