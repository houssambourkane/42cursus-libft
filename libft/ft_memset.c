/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:41:10 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/05 19:20:47 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    int i;

    i = 0;
    while (len > 0)
    {
        ((char*)b)[i] = (unsigned char)c;
        i++;
        len--;
    }
    return (b);
}