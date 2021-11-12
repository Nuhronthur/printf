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

static void	putbase(unsigned long long i, char *t)
{
	if (nb >= ft_strlen(base))
		putbase(nb / ft_strlen(t), t);
}

int	ft_putsize(unsigned long long i, char *t, void *ptr)
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

int	ft_padix(const char arg, va_list list)
{
	return (ft_putsize(va_arg(list, unsigned int)), "0123456789abcdef", NULL);
}

int	ft_padibx(const char arg, va_list list)
{
	return (ft_putsize(va_arg(list, unsigned int)), "0123456789ABCDEF", NULL);
}
