/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyukang <hyukang@student.42seoul>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:26:24 by hyukang           #+#    #+#             */
/*   Updated: 2023/08/07 20:54:17 by hyukang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_c(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	cnt_word(char *str, char *charset)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		while (is_c(str[i], charset) == 1)
			i++;
		if (str[i])
			cnt++;
		while (is_c(str[i], charset) == 0 && str[i])
			i++;
	}
	return (cnt);
}

char	*input(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (str[len] && is_c(str[len], charset) == 0)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (cnt_word(str, charset) + 1));
	while (*str)
	{
		while (*str && is_c(*str, charset) == 1)
			str++;
		if (*str)
		{
			arr[i] = input(str, charset);
			i++;
		}
		while (is_c(*str, charset) == 0 && *str)
			str++;
	}
	arr[i] = 0;
	return (arr);
}
