/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:18:37 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:32:45 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the node 'new' at the end of the list
*/

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*temp;

	if (new_node != (NULL) && lst != (NULL))
	{
		if (*lst != (NULL))
		{
			temp = *lst;
			while (temp->next != (NULL))
				temp = temp->next;
			temp->next = new_node;
		}
		else
			*lst = new_node;
	}
}
