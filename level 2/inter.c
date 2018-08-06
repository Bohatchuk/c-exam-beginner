/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 17:03:58 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 20:15:38 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ispresent(char *str, int len)
{
	int k;

	k = 0;
	while (k < len)
	{
		if (str[k] == str[len])
			return (0);
		k++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i] && ispresent(s1, i) && ispresent(s2, j))
			{
				write(1, &s2[j], 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
