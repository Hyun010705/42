/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:23:33 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/31 16:30:29 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (num);
	return (nb * ft_recursive_factorial(nb - 1));
}
