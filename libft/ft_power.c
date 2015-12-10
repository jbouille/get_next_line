/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbouille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:40:28 by jbouille          #+#    #+#             */
/*   Updated: 2015/11/27 23:42:39 by jbouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_power(int n, int power)
{
	unsigned int	number;

	if (power > 0)
		number = n * ft_power(n, power - 1);
	else if (power == 0)
		number = 1;
	else
		number = 0;
	return (number);
}
