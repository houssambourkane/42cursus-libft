/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:01:19 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/09 20:28:21 by hbourkan         ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (((char *)s + i));
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int	fnct(char const *s1, char const *set)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		j;
	size_t	l;

	j = 0;
	l = ft_strlen(s1) - 1;
	i = fnct(s1, set);
	while (l)
	{
		if (ft_strchr(set, s1[l]))
		{
			l--;
			j++;
		}
		else
			break ;
	}
	if (s1[i] == '\0' && l == 0)
		s = strdup("");
	else
		s = ft_strndup(s1 + i, ft_strlen(s1 + i) - j);
	return (s);
}
