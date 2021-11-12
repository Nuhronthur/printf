/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:03:09 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:42:37 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *f, const char *s, unsigned int l)
{
	size_t	i;

	i = 0;
	if (l == 0)
		return (0);
	while (f[i] != 0 && s[i] != 0 && f[i] == s[i] && (i < l - 1))
		i++;
	return ((unsigned char)f[i] - (unsigned char)s[i]);
}
