/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschwart <eschwart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:54:58 by eschwart          #+#    #+#             */
/*   Updated: 2024/11/08 14:32:56 by eschwart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// INCLUDES
# include <stdarg.h>
# include <unistd.h>

// PROTOTYPES
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbru(unsigned int n);
int	ft_putstr(char *str);
int	ft_hex(unsigned long long n, const char format);
int	ft_putptr(void *ptr);

#endif // FT_PRINT_H