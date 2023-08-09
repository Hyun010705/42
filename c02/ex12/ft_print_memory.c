/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:54:58 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/06 21:25:48 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_add(unsigned long long addr, int cnt)
{
	int	i;

	i = 0;
	if (addr >= 16)
	{
		print_add(addr / 16, cnt + 1);
		ft_putchar("0123456789abcdef"[addr % 16]);
	}
	else
	{
		while (i < 15 - cnt)
		{
			write(1, "0", 1);
			i++;
		}
		ft_putchar("0123456789abcdef"[addr]);
	}
}

void	print_hex(unsigned char *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	write(1, ":", 1);
	while (i < size)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		ft_putchar("0123456789abcdef"[addr[i] / 16]);
		ft_putchar("0123456789abcdef"[addr[i] % 16]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "  ", 2);
		i++;
	}
}

void	print_char(char *addr, unsigned int size)
{
	unsigned int	i;
	int				cnt;

	i = 0;
	cnt = 0;
	write(1, " ", 1);
	while (i < size)
	{
		if (32 <= addr[i] && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		cnt;
	char	*arr;

	cnt = 0;
	arr = addr;
	if (size == 0)
		return (addr);
	while (size > 16)
	{
		print_add((unsigned long long)arr, cnt);
		print_hex((unsigned char *)arr, 16);
		print_char(arr, 16);
		arr += 16;
		size -= 16;
	}
	print_add((unsigned long long)arr, cnt);
	print_hex((unsigned char *)arr, size);
	print_char(arr, size);
	arr += size;
	size = 0;
	return (addr);
}
