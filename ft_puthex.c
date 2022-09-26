/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:55:50 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/11 12:57:10 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long n, char x, int	*xx)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, x, xx);
		ft_puthex(n % 16, x, xx);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48, xx);
		else
		{
			if (x == 'x')
				ft_putchar(n - 10 + 'a', xx);
			else if (x == 'X')
				ft_putchar(n - 10 + 'A', xx);
		}
	}
}
