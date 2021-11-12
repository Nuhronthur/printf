NAME = printf.a

SRCS = ft_printf.c\
		ft_padi.c\

LIBFT = libft

OBJS	= ${SRCS:.c=.o}

CC		= clang

RM		= rm -f

FLAGS	= -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
	@echo "Creation of $(NAME)..."
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	@ar rsc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(NAME) has been successfully created!\n"

clean:
	@echo "Removal of .o files from $(NAMES)..."
	rm -f $(OBJS)
	@make clean -C $(LIBFT)
	@echo ".o files from $(NAME) have been successfully removed."

fclean: clean
	@echo "Removal of .o files from $(NAME)..."
	rm -f $(OBJS)
	rm -f $(NAME)
	@make fclean -C $(LIBFT)
	@echo "$(NAME) has been successfully removed."

re: fclean all

.PHONY : clean fclean all re