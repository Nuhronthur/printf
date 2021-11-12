/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:58:14 by jovella           #+#    #+#             */
/*   Updated: 2021/06/10 14:16:11 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	dest = malloc((sizeof(char))*(ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
