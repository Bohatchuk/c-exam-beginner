/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:32:21 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/11 18:31:32 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand_str(char *str)
{
	int i;
	int space;

	i = 0;
	space = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 && str[i] >= 1)
			space = 1;
		else
		{
			if (space != 0)
			{
				space = 0;
				write(1, "   ", 3);
			}
			write(1, &str[i], 1);
			space = 0;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
