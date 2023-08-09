/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:25:36 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/26 11:47:03 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;
	int	cnt;

	idx = 0;
	cnt = 0;
	if (*(str + idx) == '\0')
		return (1);
	while (*(str + idx) != '\0')
	{
		if (32 <= *(str + idx) && *(str + idx) <= 126)
			cnt++;
		idx++;
	}
	if (cnt == idx)
		return (1);
	else
		return (0);
}
