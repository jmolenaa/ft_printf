/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:29:30 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:31:08 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Locates the first occurrence the byte 'c' in the memory pointed to by 's'
 * It will compare the memory for 'n' bytes
 * Returns a pointer to the located byte ot NULL if it doesn't exist
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((char *)s + i) == (char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
