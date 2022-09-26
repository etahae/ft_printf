/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:37:20 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:39:46 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(int c, int *x);
void	ft_putstr(char const *s, int *x);
void	ft_putunsigned(unsigned long long nb, int *x);
void	ft_putsigned(long long nb, int *x);
void	ft_puthex(unsigned long long nb, char x, int *xx);
void	ft_putadd(void *anything, int *x);
int		ft_printf(const char *s, ...);

#endif