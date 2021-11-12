/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:39:06 by jovella           #+#    #+#             */
/*   Updated: 2021/06/21 12:51:18 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;

	if (!(s == NULL || f == NULL))
	{
		i = ft_strlen((char *)s);
		r = (char *)malloc((i + 1) * sizeof(*s));
		if (r == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			r[i] = f(i, s[i]);
			i++;
		}
		r[i] = '\0';
		return (r);
	}
	return (NULL);
}
