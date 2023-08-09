/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:44:12 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/01 21:54:20 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ext(char *arr);
int	ft_atoi_base(char *str, char *base);
int	result(char *str, char *base, int len);

int	ext(char *arr)
{
	int	i;
	int	j;

	if (arr[0] == 0 || arr[1] == 0)
		return (0);
	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		if (arr[i] == '-' || arr[i] == '+')
			return (0);
		if ((9 <= arr[i] && arr[i] <= 13) || arr[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	result(char *str, char *base, int len_base)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (base[j] != 0)
		{
			if (str[i] == base[j])
			{
				num = num * len_base + j;
				break ;
			}
				j++;
		}
		if (j == len_base)
			return (num);
		i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	idx;
	int	sign;
	int	num;
	int	len_base;

	idx = 0;
	sign = 1;
	num = 0;
	len_base = 0;
	if (!ext(base))
		return (0);
	while ((*str && 9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (base[len_base])
		len_base++;
	return (sign * result(str, base, len_base));
}
