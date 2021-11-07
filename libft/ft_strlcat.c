/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:41:30 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/07 17:29:06 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t c;

    c = 0;
    while(str[c])
        c++;
    return (c);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t len_dst;
    size_t len_src;

    i = 0;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    j = len_dst;
    if (dstsize <= len_dst)
        return (ft_strlen(src) + dstsize);
    while (src[i] && i < dstsize - len_dst - 1)
        dst[j++] = src[i++];
    dst[j] = '\0';
    return (len_dst + len_src);
}
