/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:11:21 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/31 16:24:55 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (num);
	while (nb > 0)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
