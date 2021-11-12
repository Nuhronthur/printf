/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:59:15 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:39:00 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*stmp;

	i = 0;
	stmp = (char *)s;
	while (i < n)
	{
		if (stmp[i] == (char)c)
			return ((void *)&stmp[i]);
		i++;
	}
	return (NULL);
}
