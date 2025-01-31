/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:39:41 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/31 08:39:42 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	num;
	int			len;

	num = n;
	len = 0;
	if (num < 0)
	{
		num = (num * -1);
		len += write(1, "-", 1);
	}
	if (num > 9)
	{
		len += ft_putnbr(num / 10);
		len += ft_putchar((num % 10) + 48);
	}
	else
		len += ft_putchar(num + 48);
	return (len);
}
