/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:43:31 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/29 12:45:58 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char *s = av[1];
	int i = atoi(av[2]);
	ft_printf("%s this is attempt nr: %d\n", s, i);
	printf("\n%s this is attempt nr: %d\n", s, i);
	return (0);
}
