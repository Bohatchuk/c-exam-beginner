/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 21:02:25 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:08:42 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *s1, int len, char c)
{
	int n;

	n = 0;
	while (n < len)
	{
		if (s1[n] == c)
			return (0);
		n++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int j;
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_check(argv[1], i, argv[1][i]) != 0)
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		j = 0;
		while (argv[2][j] != '\0')
		{
			if ((ft_check(argv[2], j, argv[2][j]) != 0 &&
						ft_check(argv[1], i, argv[2][j]) != 0))
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
