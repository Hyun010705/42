/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:37:21 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/26 11:45:51 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	idx;
	int	cnt;

	idx = 0;
	cnt = 0;
	if (*(str + idx) == '\0')
		return (1);
	while (*(str + idx) != '\0')
	{
		if ('A' <= *(str + idx) && *(str + idx) <= 'Z')
			cnt++;
		idx++;
	}
	if (cnt == idx)
		return (1);
	else
		return (0);
}
