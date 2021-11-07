/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:04:12 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/06 21:28:32 by hbourkan         ###   ########.fr       */
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


void ft_putendl_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}

