/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:06:43 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/29 16:06:14 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*stmp;
	unsigned char	ctmp;

	stmp = (unsigned char *)s;
	ctmp = (unsigned char)c;
	while (n--)
	{
		if (*stmp == ctmp)
			return ((void *)stmp);
		stmp++;
	}
	return (NULL);
}
