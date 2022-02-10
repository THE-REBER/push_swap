# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmanilow <hmanilow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 18:18:08 by hmanilow          #+#    #+#              #
#    Updated: 2022/02/10 18:18:09 by hmanilow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_B = checker

FLAGS	= -Wall -Werror -Wextra -fsanitize=address

HEAD = ../include/push_swap.h

SRC = \
	ft_rotate_6.c \
    push_push.c \
    mass_sort.c \
    sort_five_elements.c \
    sort_normas_3_14door_as.c \
    sorting_three_elements.c \
    struct_initialization.c \
    swap_ss.c \
    utilities.c \
    validation.c \
    push_swap.c

OBJ		= 	$(SRC:.c=.o)

SRC_B   = \
    main_bonus.c \
	utilities_bonus.c 	\
    struct_initialization_bonus.c \
    swap_ss_bonus.c \
    validation_bonus.c	\
    order_gnl_bonus.c \
    ft_rotate_6.c \
    push_push.c \
    get_next_line_utils.c \
    get_next_line.c

OBJ_B	= 	$(SRC_B:.c=.o)

LIBFT	=	-L ../Libft -lft


all: lft $(NAME)

$(NAME): $(OBJ)
	gcc  $(FLAGS) $(SRC) $(LIBFT) -o $(NAME)

bonus: lft $(OBJ_B)
	gcc  $(FLAGS) $(SRC_B) $(LIBFT) -o $(NAME_B)

%.o : %.c
	gcc $(FLAGS) -c $<

lft:
	make -C ../Libft

clean:
	/bin/rm -f $(OBJ) $(OBJ_B)
	make -C ../Libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C ../Libft/ fclean

re: fclean all