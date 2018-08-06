/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 13:38:52 by dbohatch          #+#    #+#             */
/*   Updated: 2017/09/29 14:02:48 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print_numbers(void)
{
	char n;

	n = '9';
	while ( n >= '0' && n <= '9')
	{
		write(1, &n, 1);
		n--;
	}
}
int		main(void)
{
	rev_print_numbers();
	return (0);
}
