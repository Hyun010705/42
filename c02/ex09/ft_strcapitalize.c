/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:56:33 by hyukang           #+#    #+#             */
/*   Updated: 2023/07/31 18:35:49 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	tmp;

	idx = 0;
	tmp = 0;
	while (str[idx] != '\0')
	{
		if (tmp == 0 && ('a' <= str[idx] && str[idx] <= 'z'))
			str[idx] -= 'a' - 'A';
		else if (tmp == 1 && ('A' <= str[idx] && str[idx] <= 'Z'))
				str[idx] += 'a' - 'A';
		if ('A' <= str[idx] && str[idx] <= 'Z')
			tmp = 1;
		else if ('a' <= str[idx] && str[idx] <= 'z')
			tmp = 1;
		else if ('0' <= str[idx] && str[idx] <= '9')
			tmp = 1;
		else
			tmp = 0;
		idx++;
	}
	return (str);
}
