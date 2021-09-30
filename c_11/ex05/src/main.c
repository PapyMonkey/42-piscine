/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:56:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/27 17:07:47 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{	
	if (argc != 4)
		return (1);
	ft_putnbr(ft_ope(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]));
	return (0);
}