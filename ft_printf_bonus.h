/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:16:49 by tnamir            #+#    #+#             */
/*   Updated: 2021/12/13 15:37:43 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void	sharp(va_list var, const char *s, int *read, int *x);
void	plus(va_list var, const char *s, int *read, int *x);
void	space(va_list var, const char *p, int *read, int *x);
void	formatspec(va_list var, const char *s, int *read, int *x);

#endif
