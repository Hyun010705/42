/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:17:13 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 16:52:12 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;

	if (!*to_find)
		return (str);
	while (*str)
	{
		idx = 0;
		while (str[idx] == to_find[idx])
		{
			idx++;
			if (to_find[idx] == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
