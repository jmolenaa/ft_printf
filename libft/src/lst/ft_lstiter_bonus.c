/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 19:19:59 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:33:18 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates through the list and applies the function 'f' to every node
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst != (NULL))
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
