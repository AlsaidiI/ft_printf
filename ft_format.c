/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:48:46 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/30 18:48:47 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_format(va_list arg, char format)
{
	int	len;
	int	c;

	if (!format)
		return (0);
	len = 0;
	if (format == 's')
		len += ft_putstr((va_arg(arg, char *)));
	else if (format == 'c')
	{
		c = va_arg(arg, int);
		len += write(1, &c, 1);
	}
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_putunsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_puthex(va_arg(arg, unsigned int), format);
	else if (format == 'p')
		len += ft_putptr(va_arg(arg, void *));
	else if (format == '%')
		len += write(1, "%%", 1);
	return (len);
}
