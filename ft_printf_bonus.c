/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:44:10 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:17:23 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_bonus.h"

int	ft_printf(const char *s, ...)
{
	static int	x;
	static int	read;
	va_list		var;

	read = 0;
	x = 0;
	va_start(var, s);
	while (s[x])
	{
		if (s[x] == '%')
		{
			x++;
			formatspec(var, s, &read, &x);
			x++;
		}
		else
			ft_putchar(s[x++], &read);
	}
	va_end(var);
	return (read);
}
