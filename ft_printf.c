/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:01:38 by jovella           #+#    #+#             */
/*   Updated: 2021/11/12 20:03:26 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arg, ...)
{
	const char	*str;
	va_list		list;
	int			r;
	int			p;

	i = -1;
	r = 0;
	p = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%' && (++str))
			r += padi(*str, list);
		else
		{
			ft_putchar(*str);
			r++;
			str++;
		}
	}
	va_end(arg);
	return (r);
}
