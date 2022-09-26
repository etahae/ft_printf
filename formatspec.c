/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatspec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:08:13 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:17:40 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_bonus.h"

static void	flags1(va_list var, const char *s, int *read, int *x)
{
	if (s[*x] == '#')
	{
		while (s[*x + 1] == '#')
			*x += 1;
		sharp(var, s, read, x);
	}
	if (s[*x] == '+')
	{
		while (s[*x + 1] == '+')
			*x += 1;
		plus(var, s, read, x);
	}
	else if (s[*x] == ' ')
		space(var, s, read, x);
}

void	formatspec(va_list var, const char *s, int *read, int *x)
{
	if (s[*x] == '#' || s[*x] == '+' || s[*x] == ' ')
		flags1(var, s, read, x);
	else
	{
		if (s[*x] == '%')
			ft_putchar('%', read);
		else if (s[*x] == 's')
			ft_putstr(va_arg(var, char *), read);
		else if (s[*x] == 'c')
			ft_putchar(va_arg(var, int), read);
		else if (s[*x] == 'd' || s[*x] == 'i')
			ft_putsigned(va_arg(var, int), read);
		else if (s[*x] == 'u')
			ft_putunsigned(va_arg(var, unsigned int), read);
		else if (s[*x] == 'x' || s[*x] == 'X')
			ft_puthex(va_arg(var, unsigned int), s[*x], read);
		else if (s[*x] == 'p')
			ft_putadd(va_arg(var, void *), read);
	}
}
