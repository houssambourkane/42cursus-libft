/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:40:42 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/05 18:42:43 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((char*)s)[i] = 0;
        i++;
    }
}

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
 
    ptr = malloc(count * size);
    if(ptr == NULL)
        return NULL;
    ft_bzero(ptr, count);
    return (ptr);
}

