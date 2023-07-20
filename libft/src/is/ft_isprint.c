/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 08:18:57 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:26:58 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Identifies if character is printable
 * Returns 1 if yes, 0 if not
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
