/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:31:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/06/11 10:08:47 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format_specifier(const char c, va_list args)
{
	if (c == 's')
		return (ft_print_va_str(args));
	if (c == 'c')
		return (ft_print_va_chr(args));
	if (c == 'd' || c == 'i')
		return (ft_print_va_int(args));
	if (c == 'u')
		return (ft_print_va_uint(args));
	if (c == 'p')
		return (ft_print_va_ptr(args));
	if (c == 'x' || c == 'X')
		return (ft_print_va_hex(args, c));
	if (c == '%')
		return (ft_putchar_fd(c, STDOUT_FILENO));
	return (-1);
}

int	static	handle_non_specifier(char c)
{
	int	printed;

	printed = 0;
	printed = ft_putchar_fd('%', STDOUT_FILENO);
	printed += ft_putchar_fd(c, STDOUT_FILENO);
	return (printed);
}

/*	write the output under the control of a format string  that specifies
	how subsequent arguments (or arguments accessed via the variable-length
	argument facilities of stdarg(3)) are converted for output. */

int	ft_printf(const char *fmt, ...)
{
	int			count;
	int			printed;
	va_list		args;

	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		printed = 0;
		if (*fmt == '%')
		{
			fmt++;
			if (ft_strchr(CONVERSION, *fmt))
				printed = handle_format_specifier(*fmt, args);
			else
				printed = handle_non_specifier(*fmt);
		}
		else
			printed = ft_putchar_fd(*fmt, STDOUT_FILENO);
		fmt++;
		count += printed;
	}
	va_end(args);
	return (count);
}
