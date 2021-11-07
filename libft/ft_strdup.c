/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:41:23 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/05 14:17:41 by hbourkan         ###   ########.fr       */
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

char *ft_strdup(char *s1)
{
    char *s2;
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s1);
    s2 = malloc(sizeof(char) * (len + 1));
    if (s2 == NULL)
        return NULL;
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
