/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:48:03 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:40:33 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cut(char const *s, char c, int *j)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dest = ft_substr(s, 0, i);
	if (!dest)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	*j += i;
	return (dest);
}

static int	ft_freedom(char **t, int i)
{
	if (!t[i])
	{
		while (--i >= 0)
			free(t[i]);
		free(t);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = ft_wc((char *)s, (char)c);
	j = -1;
	k = 0;
	dest = (char **)ft_calloc(sizeof(char *), i + 1);
	if (!dest)
		return (NULL);
	while (s[k] && s[k] == c)
		k++;
	while (++j, i)
	{
		dest[j] = ft_cut((s + k), c, &k);
		if (ft_freedom(dest, j))
			return (NULL);
	}
	return (dest);
}
