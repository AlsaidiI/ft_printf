/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim_als_u <ibrahim_als_u@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 08:40:18 by ibrahim_als       #+#    #+#             */
/*   Updated: 2025/01/31 08:41:04 by ibrahim_als      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(NULL)", 6));
	if (s != NULL)
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
	return (i);
}
