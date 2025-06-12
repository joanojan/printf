NAME 		:= libftprintf.a 
CC 			:= cc
CFLAGS 		:= -Wall -Wextra -Werror $(INCLUDES)
INCLUDES	:= -I. -Ilibft

LIBFT_DIR	:= libft/
LIBFT_H		:= $(LIBFT_DIR)/libft.h
LIBFT		:= $(LIBFT_DIR)/libft.a

LIBFT_SRCS	:= \
	libft/ft_putchar_fd.c	\
	libft/ft_putnbr_fd.c	\
	libft/ft_putstr_fd.c	\
	libft/ft_strlen.c		\
	libft/ft_puthex_fd.c	\
	libft/ft_putptr_fd.c	\
	libft/ft_putuint_fd.c

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

$(LIBFT): $(LIBFT_SRCS) $(LIBFT_H) $(LIBFT_DIR)/Makefile
	@echo "Building libft..."
	@$(MAKE) --no-print-directory -C $(LIBFT_DIR)

%.o : %.c ft_printf.h Makefile
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning..."
	@$(MAKE) --no-print-directory clean -C ./libft
	@rm -f $(OBJS)

fclean: clean
	@echo "removing static library files"
	@$(MAKE) --no-print-directory fclean -C ./libft
	@rm -f $(NAME)
	@echo "All clean."

re: fclean all

.PHONY: all clean fclean re
