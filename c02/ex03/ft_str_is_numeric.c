/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:14:04 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/25 17:03:59 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;
	int	cnt;

	idx = 0;
	cnt = 0;
	if (*(str + idx) == '\0')
		return (1);
	while (*(str + idx) != '\0')
	{
		if ('0' <= *(str + idx) && *(str + idx) <= '9')
			cnt++;
		idx++;
	}
	if (cnt == idx)
		return (1);
	else
		return (0);
}
