/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:25 by eschwart          #+#    #+#             */
/*   Updated: 2024/11/08 10:34:29 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb > 9)
	{
		len += ft_putnbru(nb / 10);
		len += ft_putnbru(nb % 10);
	}
	else
		len += ft_putchar(nb + '0');
	return (len);
}