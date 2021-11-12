/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:12:11 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:44:20 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*c;
	size_t		i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > i || (len + start > i && start < i))
		len = i - start;
	if (start >= i)
		len = 0;
	c = (char *)ft_calloc((len + 1), sizeof(*c));
	if (!c)
		return (NULL);
	ft_memcpy(c, s, len);
	return (c);
}
