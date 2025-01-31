/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:49:02 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/30 18:50:27 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_format(args, str[i + 1]);
		else
			len += write(1, &str[i], 1);
		++i;
	}
	va_end(args);
	return (len);
}
