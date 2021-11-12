/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:38:40 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 14:30:42 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	size_t		i;
	char		*r;
	long int	n;

	n = c;
	i = ft_intl(n);
	if (ft_intisn(n))
		i++;
	r = ((char *) ft_calloc((i + 1), sizeof(*r)));
	if (r == NULL)
		return (NULL);
	if (ft_intisn(n))
	{
		r[0] = '-';
		n *= -1;
	}
	if (n == 0)
		r[i - 1] = '0';
	while (n > 0)
	{
		r[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (r);
}
