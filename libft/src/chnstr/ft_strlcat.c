/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:01:50 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:29:16 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Appends 'src' to the end of 'dst'
 * Appends at most 'dstsize' - lenght of 'dst' - 1 characters
 * It then NUL terminates the resultign str
 * It returns the lenght of 'dst' plus the length of 'src'
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize == 0 || dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	while (i < dstsize - dstlen - 1 && *(src + i) != '\0')
	{
		*(dst + dstlen + i) = *(src + i);
		i++;
	}
	*(dst + dstlen + i) = '\0';
	return (dstlen + ft_strlen(src));
}
