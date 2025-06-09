/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_chr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:56:28 by jvila-va          #+#    #+#             */
/*   Updated: 2025/06/09 12:27:57 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print the char from the variadic argument list to STDOUT */

int	ft_print_va_chr(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar_fd(c, STDOUT_FILENO));
}
