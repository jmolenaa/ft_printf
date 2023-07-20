/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:26:02 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:29:03 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * Applies the function 'f' on each character of the string passed as argument
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s)
	{
		while (*(s + i) != '\0')
		{
			f(i, &*(s + i));
			i++;
		}
	}
}
