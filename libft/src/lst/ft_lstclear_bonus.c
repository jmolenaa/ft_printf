/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 16:52:37 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:34:59 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Frees the given node, it's content using 'f' and all the succesive nodes
 * Sets the pointer to the first node to NULL
*/

static void	clear(t_list *temp, void (*del)(void *))
{
	if (temp != (NULL))
	{
		del(temp->content);
		temp = temp->next;
		clear(temp, del);
		free(temp);
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && *lst)
	{
		temp = *lst;
		clear(temp, del);
		free(temp);
		*lst = (NULL);
	}
}
