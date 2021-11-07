/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:29:58 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/05 16:36:41 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

char *ft_strndup(char const *s1, size_t n)
{
    char *s2;
    size_t i;

	i = 0;
    s2 = malloc((sizeof(char) * n) + 1);
    if (s2 == NULL)
        return NULL;
    while (s1[i] && i < n)
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
    
}

int nb_chaine(char const *s, char c)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while(s[i])
	{
		if (s[i] == c)
			cpt++;
		i++;
	}
	return (cpt + 1);
}

int compteur_carac(char const *s, char c, int i)
{	
	int cpt;

	cpt = 0;
	while (s[i] != c && s[i])
	{
		cpt++;
		i++;
	}
	return cpt;
}


char **ft_split(char const *s, char c)
{
	int i;
	int j;
	char **s_array;
	
	i = 0;
	j = 0;
	s_array = malloc((sizeof(char*) * nb_chaine(s, c)) + 1);
	if (s_array == NULL)
		return NULL;
	while (s[i])
	{
		if (s[i] != c)
		{
			s_array[j] = malloc(sizeof(char) * compteur_carac(s, c, i));
			if (s_array[j] == NULL)
				return NULL;
			s_array[j] = ft_strndup(s + i, compteur_carac(s, c, i));
			i = i + compteur_carac(s, c, i);
			j++;
		}
		else
			i++;
	}
	s_array[j] = NULL;
	return (s_array);
}
