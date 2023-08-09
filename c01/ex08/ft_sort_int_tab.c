/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:10:03 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/25 14:06:14 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				tmp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tmp;
			}
			j++;
		}
		i++;
	}
}
