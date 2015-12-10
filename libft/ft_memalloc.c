/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:37:41 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/26 21:14:04 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tab;

	if (!(tab = (unsigned char *)malloc(size)))
		return (NULL);
	while (size--)
		tab[size] = 0;
	return ((void *)tab);
}
