/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sharp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:02:53 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:16:42 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_bonus.h"

void	sharp(va_list var, const char *s, int *read, int *x)
{
	unsigned int	a;

	*x += 1;
	if (s[*x] == 'x' || s[*x] == 'X')
	{
		a = va_arg(var, unsigned int);
		if (a != 0)
		{
			ft_putchar('0', read);
			ft_putchar(s[*x], read);
		}
		ft_puthex(a, s[*x], read);
	}
	else
		formatspec(var, s, read, x);
}
