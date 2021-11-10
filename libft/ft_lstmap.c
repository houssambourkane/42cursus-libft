/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:07:38 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/10 21:42:56 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// }

// void *funct(void *s)
// {
// 	char *content = strdup(s);
// 	content[0] = 'h';
// 	return content;
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	
	(void)del;
	if (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		lst = lst->next;
	}
	while(lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new_lst);
} 

// int main()
// {
// 	t_list * new_lst;
// 	t_list * new_lst2;
	
// 	new_lst = ft_lstnew("Houssam");
// 	new_lst2 = ft_lstnew("Ayoub");
	
// 	ft_lstadd_front(&new_lst, new_lst2);
// 	t_list *newest_list = ft_lstmap(new_lst, funct, free);

// 	print_list(newest_list);
	
// 	return 0;
// }

