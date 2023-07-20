/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 13:18:19 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:28:56 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Locates the first occurence of str 'needle' in str 'haystack'
 * Not more than 'len' characters are compared
 * Returns NULL if 'needle' isn't present
 * Returns a pointer to the first character of 'needle' in 'haystack'
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	e;

	if (*(needle) == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		if (*(haystack + i) == '\0')
			break ;
		e = 0;
		while (*(haystack + i + e) == *(needle + e))
		{
			if (i + e == len)
				break ;
			if (*(needle + e + 1) == '\0')
				return ((char *)haystack + i);
			e++;
		}
		i++;
	}
	return (NULL);
}
