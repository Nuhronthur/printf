/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:24:35 by jovella           #+#    #+#             */
/*   Updated: 2021/11/12 20:24:42 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putbase(int i, char *t)
{
	if (i >= ft_strlen(t))
		ft_putbase(i / ft_strlen(t), t);
	ft_putchar_fd(t[i % ft_strlen(t)], 1);
}

int	ft_putsize(unsigned long long  i, char *t, void *ptr)
{
	int	r;

	if (ptr)
		i = (unsigned long long)ptr;
	r = 0;
	ft_putbase(i, t);
	if (i == 0)
		return (1);
	while (i)
	{
		i /= ft_strlen(t);
		t++;
	}
	return (r);
}

int	ft_padix(va_list list)
{
	return (ft_putsize(va_arg(list, unsigned int), "0123456789abcdef", NULL));
}

int	ft_padibx(va_list list)
{
	return (ft_putsize(va_arg(list, unsigned int), "0123456789ABCDEF", NULL));
}
int ft_padis(char *s)
{
	if (s)
		return(write(1, s, ft_strlen(s)));
	return (write(1, "(null)", 6));
}