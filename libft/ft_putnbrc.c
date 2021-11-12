/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:45:51 by jovella           #+#    #+#             */
/*   Updated: 2021/11/12 21:48:59 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrc(int n)
{
	int	r;

	r = 0;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbrc(-n);
		r++;
	}
	else if (n >= 10)
	{
		ft_putnbrc(n / 10);
		ft_putchar(n % 10 + '0');
		r++;
	}
	else
	{
		ft_putchar(n + '0');
		r++;
	}
	return (r);
}
