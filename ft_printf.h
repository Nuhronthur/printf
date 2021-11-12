#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include <sys/errno.h>
# include "libft/libft.h"  


int	ft_padi(char arg, va_list list);
int	ft_padic(char c);
int ft_padis(char *s);
int	ft_padidi(va_list list);
int	ft_padiu(const char arg, va_list list);
int	ft_padip(const char arg, va_list list);
int	ft_padix(const char arg, va_list list);
int	ft_padibx(const char arg, va_list list);
static void	putbase(unsigned long long i, char *t);
int	ft_putsize(unsigned long long i, char *t, void *ptr);
int	ft_printf(const char *arg, ...);
#endif