/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:31:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/06/11 10:48:14 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format_specifier(const char c, va_list args)
{
	if (c == 's')
		return (ft_print_va_str(args));
	else if (c == 'c')
		return (ft_print_va_chr(args));
	else if (c == 'd' || c == 'i')
		return (ft_print_va_int(args));
	else if (c == 'u')
		return (ft_print_va_uint(args));
	else if (c == 'p')
		return (ft_print_va_ptr(args));
	else if (c == 'x' || c == 'X')
		return (ft_print_va_hex(args, c));
	else if (c == '%')
		return (ft_putchar_fd('%', STDOUT_FILENO));
	else
		return (ft_putchar_fd('%', 1) + ft_putchar_fd(c, 1));
}

/*	write the output under the control of a format string  that specifies
	how subsequent arguments (or arguments accessed via the variable-length
	argument facilities of stdarg(3)) are converted for output. */

int	ft_printf(const char *fmt, ...)
{
	int			count;
	va_list		args;

	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt)
				count += handle_format_specifier(*fmt, args);
		}
		else
			count += ft_putchar_fd(*fmt, STDOUT_FILENO);
		fmt++;
	}
	va_end(args);
	return (count);
}
