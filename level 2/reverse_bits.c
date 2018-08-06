/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 15:32:53 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:17:41 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	res = 0;
	i = 8;
	while (i)
	{
		res = res * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
