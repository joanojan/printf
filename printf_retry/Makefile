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

PRINTF_SRCS :=	\
		ft_printf.c			\
		ft_print_va_str.c	\
		ft_print_va_chr.c	\
		ft_print_va_int.c	\
		ft_print_va_uint.c	\
		ft_print_va_ptr.c	\
		ft_print_va_hex.c

SRCS := $(LIBFT_SRCS) $(PRINTF_SRCS)
OBJS := $(SRCS:.c=.o)

all: $(NAME)
	@echo "The build is done."

$(NAME): $(OBJS)
	@echo "Creating $(NAME)..."
	@ar rcs $(NAME) $(OBJS)
	@echo "✓ $(NAME) created successfully"

#$(LIBFT): $(LIBFT_SRCS) $(LIBFT_H) $(LIBFT_DIR)/Makefile
#	@echo "Building libft..."
#	@$(MAKE) --no-print-directory -C $(LIBFT_DIR)

%.o : %.c ft_printf.h $(LIBFT_H) Makefile
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

inspect: $(NAME)
	@echo "Contents of $(NAME):"
	@ar -t $(NAME)

clean:
	@echo "Cleaning..."
	@rm -f $(OBJS)
	@echo "Object files removed."

fclean: clean
	@echo "removing static library files"
	@rm -f $(NAME)
	@echo "All clean."

re: fclean all

.PHONY: all clean fclean re inspect
