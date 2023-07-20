/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 19:10:59 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:30:27 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a copy of string 's1'
 * Returns a pointer to the copied string or NULL on malloc failure
*/

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		i;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == (NULL))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		*(s2 + i) = *(s1 + i);
		i++;
	}
	*(s2 + i) = '\0';
	return (s2);
}
