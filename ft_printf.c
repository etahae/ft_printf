/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:44:10 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:39:23 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	search(va_list var, const char *s, int *read, int x)
{
	if (s[x] == '%')
		ft_putchar('%', read);
	else if (s[x] == 's')
		ft_putstr(va_arg(var, char *), read);
	else if (s[x] == 'c')
		ft_putchar(va_arg(var, int), read);
	else if (s[x] == 'd' || s[x] == 'i')
		ft_putsigned(va_arg(var, int), read);
	else if (s[x] == 'u')
		ft_putunsigned(va_arg(var, unsigned int), read);
	else if (s[x] == 'x' || s[x] == 'X')
		ft_puthex(va_arg(var, unsigned int), s[x], read);
	else if (s[x] == 'p')
		ft_putadd(va_arg(var, void *), read);
}

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
			search(var, s, &read, x);
			x += 1;
		}
		else
			ft_putchar(s[x++], &read);
	}
	va_end(var);
	return (read);
}
