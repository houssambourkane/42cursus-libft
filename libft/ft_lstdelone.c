/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:20:57 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/10 21:13:51 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print_lst(t_list *lst)
{
	if (lst == NULL)
		return ;
	while (lst)
	{	
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL)
		return ;
	temp = lst;
	lst = temp->next;
	del(temp->content);
	free(temp);
}

// int main()
// {
// 	t_list *new_lst;
// 	t_list *new_lst2;
// 	t_list *new_lst3;

// 	new_lst = ft_lstnew("Houssam");
// 	new_lst2 = ft_lstnew("Ayoub");
// 	new_lst3 = ft_lstnew("Chompoyiz");
	
// 	ft_lstadd_front(&new_lst, new_lst2);
// 	ft_lstadd_front(&new_lst, new_lst3);
	
// 	ft_lstdelone(new_lst, free);

// 	print_lst(new_lst);
// 	return 0;
// }
