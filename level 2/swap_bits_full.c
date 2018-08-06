/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 19:57:44 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:10:41 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	octet = (octet >> 4) | (octet << 4);
	return (octet);
}

int				main(void)
{
	char octet;

	octet = 2;
	printf("%d\n", swap_bits(octet));
	return (0);
}
