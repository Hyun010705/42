# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwlee3 <jiwlee3@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 07:30:36 by jiwlee3           #+#    #+#              #
#    Updated: 2023/08/06 08:27:24 by jiwlee3          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard *.c)

TARGET = rush-02

$(TARGET) : $(SRCS)
	cc $(FLAGS) -o $(TARGET) $(SRCS)

fclean : 
	rm -f $(TARGET)
