#include "ft_printf.h"

int	ft_padi(const char *arg, va_list list)
{
	int		i;
	int		print;

	i = 0;
	print = 0;
	while (1)
	if (!arg[i])
		break;
	else if 
	{
		if (arg[i] == 'c' || arg[i] == 's')
			print += ft_padics(arg[i]);
		else if (arg[i] == 'p')
			print += ft_padip();
		else if (arg[i] == 'd'|| arg[i] == 'i')
			print += ft_padidi(list);
		else if (arg[i] == 'x' || arg[i] == 'X')
			print += ft_padix();
		else if (arg[i] == '%')
			write(1, '%', 1);
			print += 1;
	}
	return (print);
}
int ft_padics(const char arg, va_list list)
{
	int		r;

	r = 0;
	if (arg == 'c')
	{
		ft_putchar(list);
		return(1);
	}
	else
	{
		ft_putstr(list);
		return(ft_strlen(list));
	}
}

int ft_padidi(va_list list)
{
	return(ft_putnbrc(list));
}

int ft_padix(const char arg, va_list list)
{
	if (arg == 'x')
	return(ft_putsize())
}