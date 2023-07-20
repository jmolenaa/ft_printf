/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 09:33:19 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:31:43 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Writes 'len' bytes of value 'c' to the memory pointed to by 'b'
 * Returns the pointer 'b'
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((char *)b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
