# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yslati <yslati@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 18:16:39 by yslati            #+#    #+#              #
#    Updated: 2020/03/10 10:31:09 by yslati           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC =	ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

SRC_BONUS = ft_list_push_fronte_bonus.s \
			ft_list_size_bonus.s \
			ft_list_sort_bonus.s

OBJ = $(SRC:.s=.o)

OBJ_BONUS = $(SRC_BONUS:.s=.o)

all : $(NAME)

bonus: all $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ_BONUS)
	@echo 'SUCCESS'

%.o : %.s
	@nasm -f macho64 $< -o $@
	
$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo 'SUCCESS'

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re : fclean all