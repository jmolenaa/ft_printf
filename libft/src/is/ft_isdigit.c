/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:08:09 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:25:28 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Identifies if character is a number
 * Returns 1 if yes, 0 if not
*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
