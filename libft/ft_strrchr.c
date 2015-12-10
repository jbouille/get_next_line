/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:59:15 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 17:23:17 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	x;
	char	*tmp;

	tmp = NULL;
	x = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == x)
			tmp = (char *)(s + i);
		i++;
	}
	if (s[i] == x)
		tmp = (char *)(s + i);
	return (tmp);
}
