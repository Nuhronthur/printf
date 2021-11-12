
#include "libft.h"

int	ft_putnbrc(int n)
{
	int r;

	r = 0;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbrc(-n);
		r++;
	}
	else if (n >= 10)
	{
		ft_putnbrc(n / 10);
		ft_putchar(n % 10 + '0');
		r++;
	}
	else
		ft_putchar(n + '0');
		r++;
	return(r);
}
