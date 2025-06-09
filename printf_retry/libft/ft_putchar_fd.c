/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:16:42 by jvila-va          #+#    #+#             */
/*   Updated: 2025/06/09 09:44:35 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Outputs the character ’c’ to the specified file descriptor.
*/

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
