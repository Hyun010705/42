/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:26:45 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/09 17:40:15 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	do_op(int a, char *c, int b, int (*oper[5])(int d, int e))
{
	if (c[0] == '+')
		ft_putnbr(oper[0](a, b));
	else if (c[0] == '-')
		ft_putnbr(oper[1](a, b));
	else if (c[0] == '*')
		ft_putnbr(oper[2](a, b));
	else if (c[0] == '/')
	{
		if (b == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(oper[3](a, b));
	}
	else if (c[0] == '%')
	{
		if (b == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(oper[4](a, b));
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{	
	int	(*oper[5])(int a, int b);	

	oper[0] = add;
	oper[1] = sub;
	oper[2] = mul;
	oper[3] = div;
	oper[4] = mod;
	if (argc == 4)
		do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]), oper);
	return (0);
}
