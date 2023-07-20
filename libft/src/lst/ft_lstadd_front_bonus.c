/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 10:39:52 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:32:35 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the node 'new' at the beginning of the list
*/

void	ft_lstadd_front(t_list **lst, t_list *new_node)
{
	if (new_node || lst || *lst)
	{
		new_node->next = *lst;
		*lst = new_node;
	}
}
