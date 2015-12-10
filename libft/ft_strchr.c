/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:50:02 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 14:15:42 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	x;

	i = 0;
	x = (char)c;
	while (s[i])
	{
		if (s[i] == x)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == x)
		return ((char *)(s + i));
	return (NULL);
}
