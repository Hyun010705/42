/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:22:11 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/09 15:06:24 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while (s1[idx] || s2[idx])
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
			idx++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab [j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
