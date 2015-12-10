/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:13:37 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/28 14:33:38 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_separ(char *s, char c)
{
	int	nword;
	int	i;

	i = 0;
	nword = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			nword++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nword);
}

static int	ft_strlen_separ(char *s, char c)
{
	char	*tmp;

	tmp = s;
	while (*s && *s != c)
		s++;
	return (s - tmp);
}

static char	*ft_strcpy_separ(char *s1, char *s2, char c)
{
	char *tmp;

	tmp = s1;
	while (*s2 && *s2 != c)
		*s1++ = *s2++;
	*s1 = '\0';
	return (tmp);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		len;
	int		nword;
	char	**str;

	if (!s)
		return (NULL);
	nword = ft_count_separ((char *)s, c);
	if (!(str = (char **)malloc((nword + 1) * sizeof(*str))))
		return (NULL);
	str[nword] = NULL;
	i = 0;
	while (i < nword)
	{
		while (*s && *s == c)
			s++;
		len = ft_strlen_separ((char *)s, c);
		if (!(str[i] = (char *)malloc((len + 1) * sizeof(**str))))
			return (NULL);
		ft_strcpy_separ(str[i], (char *)s, c);
		s += len;
		i++;
	}
	return (str);
}
