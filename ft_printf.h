#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include <sys/errno.h>
# include "libft/libft.h"  


int		ft_printf(const char *arg, ...);
static int	ft_padi(const char *arg, va_list l);
#endif