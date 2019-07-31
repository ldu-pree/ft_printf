/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:40:03 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/29 12:40:05 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printnbr(va_list ap)
{
	int		c;
	char	*p;

	c = va_arg(ap, int);
	p = ft_itoa(c);
	ft_putnbr(c);
	return (ft_strlen(p));
}
