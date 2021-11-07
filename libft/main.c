/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:01:08 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/02 21:23:18 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main()
{
    char *s; 
    s = ft_substr("houssam", 'u', 3);
	printf("%s", s);	
}
