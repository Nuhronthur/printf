/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:45:55 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 12:52:57 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*k;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	k = (char *)ft_calloc((i + j), sizeof(k));
	if (k == NULL)
		return (NULL);
	ft_memcpy(k, s1, i);
	ft_memcpy((k + i), s2, j);
	return (k);
}
