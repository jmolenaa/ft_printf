/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:26:33 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:30:55 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new substring from 's'
 * The string starts at index 'start' and is of maximum size 'len'
 * Returns a pointer to the new string or NULL on malloc failure
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (s == (NULL))
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len < ft_strlen(s) - start)
		substr = (char *)malloc(len + 1);
	else
		substr = (char *)malloc(ft_strlen(s) - start + 1);
	if (substr == (NULL))
		return (NULL);
	while (i < len && i < ft_strlen(s) - start)
	{
		*(substr + i) = *(s + start + i);
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}
