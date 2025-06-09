/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:20:52 by jvila-va          #+#    #+#             */
/*   Updated: 2025/06/07 16:02:21 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	Prints to fd the unsigned int argument converted to unsigned hexadecimal.
	If the format is x the radix is lowercase, uppercase otherwise ...
	Returns the number of printed chars. */

int	ft_puthex_fd(unsigned int x, char format, int fd)
{
	int				printed_chars;
	unsigned int	module;
	char			c;

	printed_chars = 0;
	if (x >= 16)
		printed_chars += ft_puthex_fd(x / 16, format, fd);
	module = x % 16;
	if (module > 9 && format == 'x')
		c = module - 10 + 'a';
	else if (module > 9 && format == 'X')
		c = module - 10 + 'A';
	if (module < 10)
		c = module + '0';
	write(fd, &c, 1);
	return (printed_chars + 1);
}
