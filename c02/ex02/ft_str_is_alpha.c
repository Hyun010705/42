/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:51:45 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/25 16:53:43 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if ('A' <= *(str + idx) && *(str + idx) <= 'Z')
			cnt++;
		idx++;
	}
	if (cnt == idx)
		return (1);
	else
		return (0);
}
