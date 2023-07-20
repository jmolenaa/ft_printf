/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:28:25 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:29:38 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Converts an upper-case letter to a lower-case letter
 * Returns the lower-case letter or the argument if it remained unchanged
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
