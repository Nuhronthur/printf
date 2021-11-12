/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:52:39 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:43:43 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *scr, const char *tar, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(tar);
	if (!*tar)
		return ((char *)scr);
	if (!l || !*scr)
		return ((char *)0);
	while (scr[i] && (i + j) <= l)
	{
		if (ft_strncmp((scr + i), tar, j) == 0)
			return ((char *)(scr + i));
		i++;
	}
	return ((char *)0);
}
