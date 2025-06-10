NAME 		:= libftprintf.a 
CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror

LIBFT_DIR	:= libft/
LIBFT		:= $(LIBFT_DIR)/libft.a

SRCS :=	\
		ft_printf.c			\
		ft_print_va_str.c	\
		ft_print_va_chr.c	\
		ft_print_va_int.c	\
		ft_print_va_uint.c	\
		ft_print_va_ptr.c	\
		ft_print_va_hex.c

OBJS := $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)
	@echo "The build is done."

$(NAME): $(OBJS)
	@echo "Creating $(NAME)..."
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)
	@echo "✓ $(NAME) created successfully"

$(LIBFT): 
	@echo "Building libft..."
	@$(MAKE) -C $(LIBFT_DIR)

%.o : %.c ft_printf.h Makefile
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning..."
	@$(MAKE) clean -C ./libft
	@rm -f $(OBJS)

fclean: clean
	@echo "removing static library files"
	@$(MAKE) fclean -C ./libft
	@rm -f $(NAME)
	@echo "All clean."

re: fclean all

.PHONY: all clean fclean re
