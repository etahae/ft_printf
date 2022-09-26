/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:08:02 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:16:28 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_bonus.h"

void	plus(va_list var, const char *s, int *read, int *x)
{
	long	a;

	*x += 1;
	if (s[*x] == 'd' || s[*x] == 'i')
	{
		a = va_arg(var, int);
		if (a >= 0)
			ft_putchar('+', read);
		ft_putsigned(a, read);
	}
	else
		formatspec(var, s, read, x);
}
