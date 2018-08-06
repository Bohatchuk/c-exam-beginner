/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 14:04:30 by dbohatch          #+#    #+#             */
/*   Updated: 2017/09/29 15:07:33 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	search_and_replace(char *a, char x, char y)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == x)
		{
			write(1, &y, 1);
		}
		else
		   write(1, &a[i], 1);
		i++;	
	}
    write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	else
		write(1, "\n", 1);
	return (0);
}
