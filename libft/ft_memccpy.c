/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:49:22 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/27 17:34:25 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	ctmp;
	size_t			i;
	unsigned char	*srctmp;
	unsigned char	*dsttmp;

	srctmp = (unsigned char *)src;
	dsttmp = (unsigned char *)dst;
	ctmp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dsttmp[i] = srctmp[i];
		if (dsttmp[i] == ctmp)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
