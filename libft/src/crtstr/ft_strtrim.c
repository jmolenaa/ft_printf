/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 15:01:38 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:30:49 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a string resulting from the removal of the characters specified
 * in 'set' from the the string 's'
 * Returns a pointer to the new string or NULL on malloc failure
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (s1 == (NULL) || set == (NULL))
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		j = 0;
	while (*(s1 + i) != '\0')
	{
		if (ft_strchr(set, *(s1 + i)) == (NULL))
			break ;
		i++;
	}
	while (j > 0)
	{
		if (ft_strrchr(set, *(s1 + j)) == (NULL))
			break ;
		j--;
	}
	s = ft_substr(s1, i, j - i + 1);
	return (s);
}
