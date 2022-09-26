/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:42:40 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/08 15:15:36 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd(void *anything, int *x)
{
	ft_putstr("0x", x);
	ft_puthex((unsigned long long)anything, 'x', x);
}
