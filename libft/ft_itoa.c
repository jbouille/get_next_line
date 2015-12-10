/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 21:52:52 by jbouille          #+#    #+#             */
/*   Updated: 2015/12/03 16:25:25 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_countnb(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char			*ft_strzero(void)
{
	char	*strzero;

	strzero = (char*)ft_strnew(1);
	strzero[0] = '0';
	return (strzero);
}

static long long	ft_abs(int n)
{
	if (n >= 0)
		return ((long long)n);
	return (-(long long)n);
}

char				*ft_itoa(int n)
{
	int			i;
	int			j;
	char		*str;
	long long	nb;

	if (n == 0)
		return (ft_strzero());
	i = 0;
	if (n < 0)
		i++;
	nb = ft_abs(n);
	j = i;
	i += (int)ft_countnb(nb);
	if (!(str = (char*)ft_strnew(i)))
		return (NULL);
	if (j == 1)
		str[0] = '-';
	while (j < i)
	{
		str[j] = nb / ft_power(10, i - j - 1) + '0';
		nb = nb - nb / ft_power(10, i - j - 1) * ft_power(10, i - j - 1);
		j++;
	}
	return (str);
}
