/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:45:30 by jovella           #+#    #+#             */
/*   Updated: 2021/06/10 12:51:48 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < l)
		i++;
	j = i;
	while (src[i - j] != '\0' && i < l - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < l)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
