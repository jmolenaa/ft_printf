/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 08:55:17 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:29:31 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Converts a lower-case letter to a uper-case letter
 * Returns the uper-case letter or the argument if it remained unchanged
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
