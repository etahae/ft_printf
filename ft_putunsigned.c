/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:55:20 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 13:58:09 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned long long nb, int *x)
{
	if (nb >= 10)
	{
		ft_putunsigned(nb / 10, x);
		ft_putunsigned(nb % 10, x);
	}
	else
		ft_putchar(nb + '0', x);
}
