/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:12:09 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/07 18:40:18 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(int n1, int n2)
{
	char	chiffre;

	chiffre = '0' + (n1 / 10);
	write(1, &chiffre, 1);
	chiffre = '0' + (n1 % 10);
	write(1, &chiffre, 1);
	write(1, " ", 1);
	chiffre = '0' + (n2 / 10);
	write(1, &chiffre, 1);
	chiffre = '0' + (n2 % 10);
	write(1, &chiffre, 1);
}

void	ft_print_comb2(void)
{
	int	nombre1;
	int	nombre2;

	nombre1 = 0;
	nombre2 = 1;
	while (nombre1 <= 98)
	{
		while (nombre2 <= 99)
		{
			ft_print_numbers(nombre1, nombre2);
			if (nombre1 == 98)
				break ;
			write(1, ", ", 2);
			nombre2++;
		}
		nombre1++;
		nombre2 = nombre1 + 1;
	}
}
