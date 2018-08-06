/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:43:03 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/05 23:43:06 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ulstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return(*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ulstr(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}


