/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:26:11 by jbouille          #+#    #+#             */
/*   Updated: 2015/12/03 16:56:12 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*str;

	str = dst;
	while (n > 0 && *src)
	{
		*str++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*str++ = '\0';
		--n;
	}
	return (dst);
}
