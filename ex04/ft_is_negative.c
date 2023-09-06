/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:45:02 by ede-cola          #+#    #+#             */
/*   Updated: 2023/09/06 21:03:21 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positif;
	char	negatif;

	positif = 'P';
	negatif = 'N';
	if (n >= 0)
		write(1, &positif, 1);
	else
		write(1, &negatif, 1);
}
