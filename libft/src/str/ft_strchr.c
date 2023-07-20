/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 10:34:35 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:28:11 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Locates the first occurence of the given character in the given string
 * Returns a pointer to the located character or NULL if it doesnt appear
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char) c)
			return ((char *) s + i);
		i++;
	}
	if ((char) c == '\0')
		return ((char *) s + i);
	return (NULL);
}
