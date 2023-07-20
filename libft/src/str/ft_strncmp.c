/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 10:53:52 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:28:39 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Compares the two given strings according to ascii value.
 * Stops when strings differ, both strings end or 'n' characters were compared
 * Returns an integer greater, equal or less than 0 according as
 * 's1' is greater than, equal to, or less than 's2'
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		diff;
	size_t	i;

	diff = 0;
	i = 0;
	while (diff == 0 && i < n)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			return (diff);
		diff = (unsigned char)*(s1 + i) - (unsigned char)*(s2 + i);
		i++;
	}
	return (diff);
}
