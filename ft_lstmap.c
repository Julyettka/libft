/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 10:19:49 by imelnych          #+#    #+#             */
/*   Updated: 2017/11/09 11:59:24 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates a list lst and applies the function f to each link to create a
** “fresh” list (using malloc(3)) resulting from the successive applications
** of f. If the allocation fails, the function returns NULL.
*/

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	new = (t_list *)malloc(sizeof(lst));
	if (!new)
		return (NULL);
	if (f)
	{
		while (lst)
		{
			new = f(lst);
			new = new->next;
			lst = lst->next;
		}
	}
	return(new);
}
