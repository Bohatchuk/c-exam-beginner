/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 20:32:21 by exam              #+#    #+#             */
/*   Updated: 2017/10/11 15:17:45 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;

	div = 128;
	while (div <= 128 && div >= 1)
	{
		if (octet >= div)
		{
			write(1, "1", 1);
			octet = octet % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}
