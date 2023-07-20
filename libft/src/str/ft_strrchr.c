/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:34:09 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:28:22 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Locates the last occurence of the given character in the given string
 * Returns a pointer to the located character or NULL if it doesnt appear
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	while (i >= 0)
	{
		if (*(s + i) == (char) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
