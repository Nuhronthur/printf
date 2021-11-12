/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:01:12 by jovella           #+#    #+#             */
/*   Updated: 2021/08/15 18:15:08 by jovella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/errno.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
char			**ft_affect(char const *s1, char **dst, char c, int l);
int				ft_atoi(const char *s);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t l, size_t s);
int				ft_ischarset(int c, char const *cs);
int				ft_intisn(int n);
size_t			ft_intl(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(char c);
int				ft_isdigit(int c);
int				ft_isprint(char c);
char			*ft_itoa(int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t l);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_putnbrc(int n);
void			ft_putstr_fd(char *s, int fd);
void			ft_putstr(char *s);
int				ft_putstrc(char *s);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*strdup(const char *s);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t l);
size_t			ft_strlcpy(char *dst, const char *src, size_t t);
int				ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *f, const char *s, unsigned int l);
char			*ft_strnstr(const char *scr, const char *tar, size_t l);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(char c);
int				ft_toupper(char c);
int				ft_wc(char *str, int c);
#endif
