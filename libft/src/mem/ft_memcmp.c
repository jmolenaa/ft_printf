/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 12:23:50 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:31:16 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Compares the memory pointed to by 's1' and 's2'
 * Stops when memory differs or when 'n' bytes are compared
 * Returns an integer greater, equal or less than 0 according as
 * 's1' is greater than, equal to, or less than 's2'
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		diff;
	char	*s1t;
	char	*s2t;

	i = 0;
	diff = 0;
	s1t = (char *)s1;
	s2t = (char *)s2;
	while (diff == 0 && i < n)
	{
		diff = (unsigned char) *(s1t + i) - (unsigned char) *(s2t + i);
		i++;
	}
	return (diff);
}
