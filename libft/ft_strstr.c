/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 21:26:34 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 16:28:49 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	if (!s2[0])
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && s1[i + j] && s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
