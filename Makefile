# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 14:57:19 by albaud            #+#    #+#              #
#    Updated: 2024/01/05 15:29:25 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libtroll.a
MAIN		= srcs/ft_buse_error.c srcs/ft_double_free.c srcs/ft_free_all.c srcs/ft_killall.c srcs/ft_leaks.c srcs/ft_rmsignal.c srcs/ft_segfault.c srcs/ft_stack_overflow.c
OBJS		= $(patsubst srcs/%.c, objs/%.o, $(MAIN))
LIB 		= libs/koflibc/libft.a libs/vector3d/vlib.a
CC			= /usr/bin/gcc -g
CFLAGS		= -Wall -Wextra -Werror
OBJ_DIR		= objs
SRC_DIR		= srcs


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

all		: ${NAME}

$(NAME)	: ${OBJS}
		ar rcs ${NAME} ${OBJS} 

clean	:
		rm -rf $(OBJ_DIR)

fclean	:	clean
		rm -f ${NAME}

re:		fclean all

test: all
		$(CC) $(CFLAGS) -fsanitize=address -o test main.c $(NAME)