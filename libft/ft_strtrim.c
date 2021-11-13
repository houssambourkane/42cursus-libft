/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:01:19 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/13 18:52:06 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(char const *s1, size_t n)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = malloc(sizeof(char) * (n + 1));
	if (s2 == NULL)
		return (NULL);
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

static int	find_i(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int	find_j(char const *s1, char const *set)
{
	int	j;
	int	l;

	l = ft_strlen(s1) - 1;
	j = 0;
	while (l > 0)
	{
		if (ft_strchr(set, s1[l]))
		{
			l--;
			j++;
		}
		else
			break ;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = find_i(s1, set);
	j = find_j(s1, set);
	if (s1[i] == '\0')
		s = ft_strdup("");
	else
		s = ft_strndup(s1 + i, ft_strlen(s1 + i) - j);
	return (s);
}
