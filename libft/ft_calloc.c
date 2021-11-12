/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:37:22 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 13:12:46 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t l, size_t s)
{
	unsigned char	*t;

	if (!l || !s)
	{
		l = 1;
		s = 1;
	}
	t = malloc(l * s);
	if (t == NULL)
		return (NULL);
	ft_bzero(t, l * s);
	return ((void *)t);
}
