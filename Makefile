# [ VARIABLES ] #

NAME		=	push_swap
RM			= 	rm -rf
MAKE		= 	make
LIBFT		= 	./libft

# [ COMPILATION VARIABLES ] #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
LIBFT_INC	=	-I./libft -I./libft/char -I./libft/file -I./libft/int -I./libft/lst -I./libft/mem -I./libft/print -I./libft/str

# [ SRCS ]

SRCS		=	main.c\

# [ OBJECTS ] #

OBJ			=	./objs
OBJS		=	$(addprefix $(OBJ)/, $(SRCS:.c=.o))

# [ PATH ] #

VPATH		=	includes:srcs:libft

# [ RULES ] #

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJ) $(OBJS)
			$(CC) $(CFLAGS) -I./includes -I./libft -o $(NAME) $(OBJS) $(LIBFT)/libft.a

$(OBJ):
			@mkdir -p $(OBJ)

$(LIBFT):
			@$(MAKE) -C $(LIBFT)

$(OBJ)/%.o: $(SRCS)
			$(CC) $(CFLAGS) -I./includes -I./libft $(LIBFT_INC) -c $< -o $@
clean:
			@$(RM) $(OBJ)
			@$(MAKE) clean -C $(LIBFT)

fclean:		clean
			@$(RM) $(NAME) 2>/dev/null
			@$(MAKE) fclean -C $(LIBFT)

re:			fclean all

.PHONY:		all libft clean re fclean

