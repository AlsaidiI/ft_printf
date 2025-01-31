/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:50:42 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/31 08:34:39 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define UPPER "0123456789ABCDEF"
# define LOWER "0123456789abcdef"

int		ft_format(va_list args, const char format);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_puthex(unsigned int n, char casing);
int		ft_putnbr(int n);
int		ft_putptr(void *ptr);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int n);

#endif