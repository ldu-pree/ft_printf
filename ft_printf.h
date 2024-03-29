/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:39:35 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/29 12:39:38 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** to do: fix segfault when int is called with %s instead of %d.
*/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"			/* Black */
# define RED			"\033[31m"			/* Red */
# define GREEN			"\033[32m"			/* Green */
# define YELLOW			"\033[33m"	 		/* Yellow */
# define BLUE			"\033[34m"			/* Blue */
# define MAGENTA		"\033[35m"			/* Magenta */
# define CYAN			"\033[36m"			/* Cyan */
# define WHITE			"\033[37m"	 		/* White */
# define BOLDBLACK		"\033[1m\033[30m"	/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"	/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"	/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"	/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"	/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"	/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"	/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"	/* Bold White */

/*
** SRCS
*/
size_t	ft_strlen(const char *str);
char	*ft_itoa(int nb);
char	*ft_utoa(unsigned int nb);
char	*ft_otoa(unsigned int nb);
char	*ft_htoa(unsigned long nb);

void	ft_putstr(const char *s1);
void	ft_putnbr(int n);
int		ft_putchar(const char c);
int		ft_putint(int c);
int		ft_printchar(va_list ap);
int		ft_printstr(va_list ap);
int		ft_printnbr(va_list ap);
int		ft_printunsigned(va_list ap);
int		ft_printoctal(va_list ap);
int		ft_printhexa(va_list ap);
int		ft_printvoid(va_list ap);

/*
** Printf
*/
int		ft_printf(const char *s, ...);

#endif /* ! FT_PRINTF_H */
