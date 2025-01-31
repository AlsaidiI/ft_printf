/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:41:13 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/31 08:41:15 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	current_digit;

	if (n <= 9)
	{
		current_digit = n + '0';
		return (write(1, &current_digit, 1));
	}
	current_digit = (n % 10) + '0';
	return (ft_putnbr(n / 10) + write(1, &current_digit, 1));
}
