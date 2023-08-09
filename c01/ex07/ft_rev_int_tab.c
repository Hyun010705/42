/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:16:30 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/27 14:39:42 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	idx_f;
	int	idx_l;
	int	num;

	idx_f = 0;
	idx_l = size - 1;
	num = size / 2;
	while (num > 0)
	{
		tmp = *(tab + idx_f);
		*(tab + idx_f) = *(tab + idx_l);
		*(tab + idx_l) = tmp;
		idx_f++;
		idx_l--;
		num--;
	}
}
