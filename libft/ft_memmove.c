/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:44:37 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 22:51:02 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dsttmp;
	char	*srctmp;

	srctmp = (char *)src;
	dsttmp = (char *)dst;
	if (srctmp <= dsttmp)
	{
		dsttmp += len - 1;
		srctmp += len - 1;
		while (len--)
			*dsttmp-- = *srctmp--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
