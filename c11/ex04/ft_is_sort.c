/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:17:34 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/09 17:44:08 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	up;
	int	down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i +1]) >= 0)
			up++;
		if ((*f)(tab[i], tab[i +1]) <= 0)
			down++;
		i++;
	}
	if (down == i || up == i)
		return (1);
	return (0);
}
