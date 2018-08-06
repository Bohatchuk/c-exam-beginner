/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 19:16:54 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/10 19:17:03 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	do_op(int n1, char *sign, int n2)
{
	int res;

	res = 0;
	if (sign[0] == '+')
		res = n1 + n2;
	else if (sign[0] == '-')
		res = n1 - n2;
	else if (sign[0] == '/')
		res = n1 / n2;
	else if (sign[0] == '*')
		res = n1 * n2;
	else if (sign[0] == '%')
		res = n1 % n2;
	printf("%d\n", res);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		do_op(atoi(argv[1]), argv[2], atoi(argv[3]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
