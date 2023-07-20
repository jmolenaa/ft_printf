/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:49:12 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:25:18 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Identifies if character is alphabetic
 * Returns 1 if yes, 0 if not
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
