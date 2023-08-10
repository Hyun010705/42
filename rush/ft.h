/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwlee3 <jiwlee3@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 07:13:51 by jiwlee3           #+#    #+#             */
/*   Updated: 2023/08/06 16:23:06 by yeoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_dict
{
	long long	key;
	char		*value;
}t_dict;
int			ft_strlen(char *str);
int			exception(int argc, char **argv, char **path, int fd);
void		print_num(long long num, int pos, t_dict *dic, int *is_first);
void		partial_print(long long num, int pos, t_dict *dic, int *is_first);
void		print_val(long long num, t_dict *dic, int *is_first);
int			get_size(char *str);
char		*ft_strdup(char *src, int size);
void		get_str(char *buf, t_dict *dic);
long long	ft_atoi(char *buf);
void		set_dict(char *dict, int size, char *path);
int			len_dic(char *path);
char		*trim(char *str);
void		set_value(long long num, char *str, t_dict *dic);
void		init_dictionary(t_dict *dic);

#endif
