/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 14:51:08 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:29:45 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * Allocates 'count' * 'size' memory and sets the bytes to zero
\ * Returns a pointer to the allocated memory or NULL on malloc failure
*/

void	*ft_calloc(size_t count, size_t size)
{
	void		*str;
	size_t		i;

	i = 0;
	str = malloc(count * size);
	if (str == (NULL))
		return (NULL);
	while (i < count * size)
	{
		*((char *)str + i) = '\0';
		i++;
	}
	return (str);
}
