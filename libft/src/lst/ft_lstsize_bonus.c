/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 11:49:43 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:32:22 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of nodes in the list
 * Returns the number of nodes
*/

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		while (lst != (NULL))
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}
