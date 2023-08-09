/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:53:49 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/28 17:15:34 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx] && s2[idx] && idx < n)
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx++;
	}
	if (idx == n)
		return (0);
	else
		return (s1[idx] - s2[idx]);
}
