/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:41:01 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/05 14:26:41 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (((unsigned char*)s)[i] && i < n)
    {
        if (((unsigned char*)s)[i] == (unsigned char)c)
            return (unsigned char*)(s + i);
        i++;
    }
    return (0);
}

