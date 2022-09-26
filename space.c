/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:16:01 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:16:46 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_bonus.h"

void	space(va_list var, const char *s, int *read, int *x)
{
	int		a;

	*x += 1;
	while (s[*x] == ' ')
		*x += 1;
	if (s[*x] == 'd' || s[*x] == 'i')
	{
		a = va_arg(var, int);
		if (a >= 0)
			ft_putchar(' ', read);
		ft_putsigned(a, read);
	}
	else
		formatspec(var, s, read, x);
}
