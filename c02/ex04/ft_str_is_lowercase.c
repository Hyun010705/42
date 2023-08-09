/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:23:50 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/25 17:05:09 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	idx;
	int	cnt;

	idx = 0;
	cnt = 0;
	if (*(str + idx) == '\0')
		return (1);
	while (*(str + idx) != '\0')
	{
		if ('a' <= *(str + idx) && *(str + idx) <= 'z')
			cnt++;
		idx++;
	}
	if (cnt == idx)
		return (1);
	else
		return (0);
}
