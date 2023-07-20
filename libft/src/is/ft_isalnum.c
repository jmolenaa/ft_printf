/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:20:44 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:26:10 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Identifies if character is alphanumeric
 * Returns 1 if yes, 0 if not
*/

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
