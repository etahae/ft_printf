/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:55:41 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/08 11:55:06 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char const *s, int *x)
{
	int	i;

	i = 0;
	if (!s)
		ft_putstr("(null)", x);
	else
	{
		while (s[i])
		{
			ft_putchar(s[i], x);
			i++;
		}
	}
}
