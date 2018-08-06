/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 17:58:56 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/10 18:14:04 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			ft_putchar(str[i] + 1);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			ft_putchar(str[i] - 25);
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
		rotone(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
