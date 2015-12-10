/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 20:51:02 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 12:12:38 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*btmp;
	unsigned char	ctmp;

	btmp = (unsigned char *)b;
	ctmp = (unsigned char)c;
	while (len--)
		*btmp++ = ctmp;
	return (b);
}
