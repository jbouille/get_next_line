/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 21:27:05 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 22:52:23 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && (size_t)(i + j) < n)
	{
		while (s1[i + j] == s2[j] && s1[i + j] && s2[j]
			&& (size_t)(i + j) < n)
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
