/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:14:56 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/03 21:25:25 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime1(int nb);
int	ft_find_next_prime(int nb);

int	ft_is_prime1(int nb)
{
	long long	cnt;

	cnt = 2;
	if (nb <= 1)
		return (0);
	while (cnt * cnt <= nb)
	{
		if (nb % cnt == 0)
			return (0);
		cnt++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime1(nb))
		nb += 1;
	return (nb);
}
