/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:23:33 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/28 17:07:07 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	if (!f || !lst)
		return (NULL);
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	list = f(lst);
	list->next = ft_lstmap(lst->next, f);
	return (list);
}
