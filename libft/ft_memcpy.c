/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:05:23 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/27 17:34:00 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srctmp;
	char	*dsttmp;

	srctmp = (char *)src;
	dsttmp = (char *)dst;
	while (n--)
		*dsttmp++ = *srctmp++;
	return (dst);
}
