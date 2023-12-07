/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:46:23 by lkirillo          #+#    #+#             */
/*   Updated: 2023/11/30 13:59:49 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;
	void	*con;

	if (!f || !del || !lst)
		return (0);
	newlist = NULL;
	while (lst)
	{
		con = f(lst -> content);
		temp = ft_lstnew(con);
		if (!temp)
		{
			del(con);
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, temp);
		lst = lst -> next;
	}
	lst = NULL;
	return (newlist);
}
