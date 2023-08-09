/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:12:56 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/02 21:17:09 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid(int *board, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[row] == board[i])
			return (0);
		else if (board[row] - board[i] == row - i)
			return (0);
		else if (board[row] - board[i] == i - row)
			return (0);
		i++;
	}
	return (1);
}

void	queen(int *board, int row, int *cnt)
{
	int		col;
	int		i;
	char	ch;

	col = 0;
	i = 0;
	if (row == 10)
	{
		*cnt += 1;
		while (i < 10)
		{
			ch = board[i] + '0';
			write(1, &ch, 1);
			i++;
		}
		write(1, "\n", 1);
		return ;
	}
	while (col < 10)
	{
		board[row] = col;
		if (valid(board, row))
			queen(board, row + 1, cnt);
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	row;
	int	cnt;
	int	idx;

	row = 0;
	cnt = 0;
	idx = 0;
	while (idx < 10)
		board[idx++] = 0;
	queen(board, row, &cnt);
	return (cnt);
}
