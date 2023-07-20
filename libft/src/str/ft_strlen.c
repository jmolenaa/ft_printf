/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 08:40:33 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:28:30 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Takes a string and returns it's length
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}
