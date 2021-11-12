#include "libft.h"

int	ft_putstr(char *s)
{
	int r;
	if (s == NULL)
		return(0);
	while (*s)
		write(1, s++, 1);
		r++;
	return(r);
}
