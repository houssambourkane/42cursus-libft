/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:41:42 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/05 16:06:36 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    int flag;

    i = 0;
    flag = 0;
    if (needle[0] == '\0')
        return ((char*)haystack);
    while (haystack[i] && i < len)
    {
        if (needle[0] == haystack[i])
        {
            j = 0;
            while (needle[j])
            {
                if (needle[j] != haystack[i] || i == len)
                {
                    flag = 0;
                    break;
                }
                flag = 1;
                i++;
                j++;
            }
            if (flag == 1)
                return ((char*)(haystack + i - j));
        }
        i++;
    }
    return 0;
}