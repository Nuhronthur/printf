/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:04:17 by jovella           #+#    #+#             */
/*   Updated: 2021/11/12 21:03:54 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_padi(char arg, va_list list)
{
	int		r;

	r = 0;
	if (arg == 'c')
		return (ft_padic(va_arg(list, int)));
	else if (arg == 's')
		return (ft_padis(va_arg(list, char *)));
	else if (arg == 'p')
		r += ft_padip(arg, list);
	else if (arg == 'd' || arg == 'i')
		r += ft_padidi(va_arg(list, int));
	else if (arg == 'x')
		r += ft_padix(arg, list);
	else if (arg == 'X')
		r += ft_padibx(arg, list);
	else if (arg == 'p')
		r += ft_padip(arg, list);
	else if (arg == '%')
	{
		return (write(1, "%", 1));
	}
	return (r);
}

int	ft_padic(char c)
{
	return (write(1, &c,1));
}

int	ft_padidi(int n)
{
	return (ft_putnbrc(n));
}

int	ft_padiu(const char arg, va_list list)
{
	return (ft_putsize(va_arg(list, unsigned int), "0123456789", NULL));
}

int	ft_padip(const char arg, va_list list)
{
	int	r;

	r = ft_putsize(0, "0123456789abcdef", (void *)va_arg(list, char *));
	return (r);
}
