/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:37:42 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/07 18:03:44 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *previous_last_element;
    
    if (alst == NULL) {
        *alst = new;
        (*alst)->next = NULL;
    }
    else {
        while((*alst)->next) {
            (*alst) = (*alst)->next;
        }
        previous_last_element = *alst;
        *alst = new;
        (*alst)->next = NULL;
        previous_last_element->next = *alst;
        
    }
        
}  