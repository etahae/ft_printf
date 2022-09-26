/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:10:55 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/11 12:57:15 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putsigned(long long nb, int *x)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', x);
	}
	if (nb >= 10)
	{
		ft_putsigned(nb / 10, x);
		ft_putsigned(nb % 10, x);
	}
	else
		ft_putchar(nb + '0', x);
}
