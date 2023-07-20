/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:41:42 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:31:49 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Writes character 'c' to the given file descriptor
*/

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
