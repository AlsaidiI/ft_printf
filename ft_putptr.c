/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:39:56 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/31 08:40:10 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *arg)
{
	int					count;
	int					i;
	unsigned long long	num;
	char				address[17];

	count = 0;
	if (!arg)
		return (write(1, "0x0", 3));
	num = (unsigned long long)arg;
	count += write(1, "0x", 2);
	i = 0;
	while (num)
	{
		address[i++] = LOWER[num % 16];
		num /= 16;
	}
	address[i] = '\0';
	while (i > 0)
	{
		i--;
		count += write(1, &address[i], 1);
	}
	return (count);
}
