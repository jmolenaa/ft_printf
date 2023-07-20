/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 10:15:42 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:32:14 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new t_list node and sets its member 'content' to the argument
 * Returns a pointer to the new node or NULL on malloc failure
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (ptr == (NULL))
		return (NULL);
	ptr->content = content;
	ptr->next = (NULL);
	return (ptr);
}
