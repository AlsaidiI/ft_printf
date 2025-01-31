/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:39:17 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/31 14:08:07 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char casing)
{
	int	count;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else if (casing == 'x')
	{
		if (n / 16 == 0)
			return (write(1, &LOWER[n % 16], 1));
		count += (ft_puthex((n / 16), 'x') + write(1, &LOWER[n % 16],
					1));
	}
	else if (casing == 'X')
	{
		if (n / 16 == 0)
			return (write(1, &UPPER[n % 16], 1));
		count += (ft_puthex((n / 16), 'X') + write(1, &UPPER[n % 16],
					1));
	}
	return (count);
}
