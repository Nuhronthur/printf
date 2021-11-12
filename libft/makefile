# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jovella <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 13:01:03 by jovella           #+#    #+#              #
#    Updated: 2021/08/15 18:34:51 by jovella          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

SRCS 	= ft_atoi.c\
  		ft_bzero.c\
   		ft_calloc.c\
		ft_intisn.c\
		ft_intl.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putchar.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putnbrc.c\
		ft_putstr_fd.c\
		ft_putstrc.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_wc.c

OBJS	= ${SRCS:.c=.o}

GCC		= gcc
RM		= rm -f
FLAGS	= -Wall -Werror -Wextra

$(NAME):	${OBJS}
				ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:				fclean all

.PHONY:		all clean fclean re