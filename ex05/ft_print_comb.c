/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:07:21 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/07 13:08:52 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write_numbers(int c1, int c2, int c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
}

void	ft_print_comb(void)
{
	int		chiffre1;
	int		chiffre2;
	int		chiffre3;

	chiffre1 = '0';
	chiffre2 = '1';
	chiffre3 = '2';
	while (chiffre1 <= '7')
	{
		while (chiffre2 <= '8')
		{
			while (chiffre3 <= '9')
			{
				ft_write_numbers(chiffre1, chiffre2, chiffre3);
				chiffre3++;
				if (chiffre1 == '7')
					break ;
				write(1, ", ", 2);
			}
			chiffre2++;
			chiffre3 = chiffre2 + 1;
		}
		chiffre1++;
		chiffre2 = chiffre1;
	}
}
