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
	int			i;

	r = 0;
	i = 0;
	va_start(list, arg);
	while (str[i])
	{
		if (str[i] == '%' && (str[i +1]))
			r += ft_padi(str[++i], list);
		else
		{
			r += write(1, &str[i], 1);
			i++;
		}
	}
	va_end(list);
	return (r);
}
