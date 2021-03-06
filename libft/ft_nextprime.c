/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:52:16 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/27 22:56:01 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nextprime(int n)
{
	if (n < 2)
		n = 2;
	while (!ft_isprime(n))
		n++;
	return (n);
}
