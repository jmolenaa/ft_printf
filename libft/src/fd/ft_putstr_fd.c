/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:56:46 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:31:56 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * Writes string 's' to the given file descriptor
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd >= 0)
		write(fd, s, ft_strlen(s));
}
