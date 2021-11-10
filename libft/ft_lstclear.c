/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:56:35 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/09 15:33:50 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (del)(void*))
{
	t_list	*temp1;

	if (*lst)
	{
		while (*lst)
		{
			temp1 = *lst;
			del(temp1->content);
			*lst = temp1->next;
			free(temp1);
		}
		*lst = NULL;
	}
}
