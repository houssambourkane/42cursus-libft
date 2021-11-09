/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:56:35 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/08 16:45:24 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void*))
{
	t_list	*lst1;
	t_list	*lst2;

	if (*lst)
	{
		lst1 = *lst;
		while (lst1)
		{
			lst2 = lst1;
			del(lst1->content);
			lst1 = lst1->next;
			free(lst2);
		}
		*lst = NULL;
	}
}
