# [ VARIABLES ] #

NAME		=	push_swap
RM			= 	rm -rf
MAKE		= 	make
LIBFT		= 	./libft

# [ COMPILATION VARIABLES ] #

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -g3 -ggdb
LIBFT_INC		=	-I./libft -I./libft/char -I./libft/file -I./libft/int -I./libft/lst -I./libft/mem -I./libft/print -I./libft/str
PUSH_SWAP_INC	=	-I./srcs/parser -I./srcs/free -I./srcs/store -I./srcs/operator
# [ SRCS ]

SRCS		=	main.c\
				parse_args.c\
				parse_arg.c\
				exit_and_free.c\
				exit_and_free_str.c\
				free_stack.c\
				store_stack_elem.c\
				sa.c\
				sb.c\
				ss.c\
				pa.c\
				pb.c\
				ra.c\
				rb.c\
				rr.c\
				rra.c\
				rrb.c\
				rrr.c\

# [ OBJECTS ] #

OBJ			=	./objs
OBJS		=	$(addprefix $(OBJ)/, $(SRCS:.c=.o))

# [ PATH ] #

VPATH		=	includes:srcs:libft:srcs/parser:srcs/free:srcs/store:srcs/operator

# [ RULES ] #

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJ) $(OBJS)
			$(CC) $(CFLAGS) -I./includes -I./libft $(PUSH_SWAP_INC) -o $(NAME) $(OBJS) $(LIBFT)/libft.a

$(OBJ):
			@mkdir -p $(OBJ)

$(LIBFT):
			@$(MAKE) bonus -C $(LIBFT)

$(OBJ)/%.o: %.c
			$(CC) $(CFLAGS) -I./includes $(LIBFT_INC) $(PUSH_SWAP_INC) -c $< -o $@
clean:
			@$(RM) $(OBJ)
			@$(MAKE) clean -C $(LIBFT)

fclean:		clean
			@$(RM) $(NAME) 2>/dev/null
			@$(MAKE) fclean -C $(LIBFT)

re:			fclean all

.PHONY:		all libft clean re fclean

