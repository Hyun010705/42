/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_non_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <[hyukang]@student.42seoul>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:37:30 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 11:03:26 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	unsigned char	ch;
	unsigned char	k;
	int				idx;

	idx = 0;
	k = *(str + idx);
	while (k != '\0')
	{
		if (!(32 <= k && k <= 126))
		{
			write(1, "\\", 1);
			ch = "0123456789ABCDEF"[k / 16];
			ft_putchar(ch);
			ch = "0123456789ABCDEF"[k % 16];
			ft_putchar(ch);
		}
		else
			write(1, &k, 1);
		idx++;
		k = *(str + idx);
	}
}

void	ft_putchar(char c)
{
	if ('A' <= c && c <= 'Z')
	{
		c += 'a' - 'A';
	}
	write(1, &c, 1);
}
