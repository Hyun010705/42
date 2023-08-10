/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwlee3 <jiwlee3@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 07:23:01 by jiwlee3           #+#    #+#             */
/*   Updated: 2023/08/06 16:37:54 by yeoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_num(long long num, int pos, t_dict *dic, int *is_first)
{
	if (num == 0)
		return ;
	print_num(num / 1000, pos * 1000, dic, is_first);
	partial_print(num % 1000, pos, dic, is_first);
}

void	partial_print(long long num, int pos, t_dict *dic, int *is_first)
{
	if (num / 100 > 0)
	{
		print_val(num / 100, dic, is_first);
		print_val(100, dic, is_first);
		num = num % 100;
	}
	if (num > 0 && num < 20)
		print_val(num, dic, is_first);
	else
	{
		if (num / 10 > 0)
		{
			print_val((num / 10) * 10, dic, is_first);
			num = num % 10;
		}
		if (num > 0)
			print_val(num, dic, is_first);
	}
	if (pos != 1 && num > 0)
		print_val(pos, dic, is_first);
}

void	print_val(long long num, t_dict *dic, int *is_first)
{
	int	idx;

	idx = 0;
	if (*is_first)
		*is_first = 0;
	else
		write(1, " ", 1);
	while (dic->key != -1)
	{
		if (dic->key == num)
		{
			while (dic->value[idx])
			{
				write(1, &dic->value[idx], 1);
				idx ++;
			}
			break ;
		}
		dic ++;
	}
}
