/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:44:39 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 15:45:07 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wc(char *str, int c)
{
	int		nb;
	int		s;

	enum e_state
	{
		OUTSIDE_WD,
		INSIDE_WD
	};
	nb = 0;
	s = OUTSIDE_WD;
	while (*str)
	{
		if (ft_ischarset(*str, (char const *)&c))
			s = OUTSIDE_WD;
		else if (s == OUTSIDE_WD)
		{
			s = INSIDE_WD;
			nb++;
		}
		str++;
	}
	return (nb);
}
