/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:19:51 by eschwart          #+#    #+#             */
/*   Updated: 2024/11/08 14:34:32 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int					len;
	unsigned long long	adresse;

	len = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	adresse = (unsigned long long)ptr;
	len += ft_putstr("0x");
	len += ft_hex(adresse, 'x');
	return (len);
}
