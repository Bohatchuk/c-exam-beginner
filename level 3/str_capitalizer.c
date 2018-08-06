/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 19:38:48 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/02 15:52:46 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_uppercase(char x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}

int		ft_is_lowercase(char x)
{
	if (x >= 97 && x <= 122)
		return (1);
	else
		return (0);
}

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
		while (str[i] != '\0')
	{
		if (ft_is_uppercase(str[i]) == 1 && (i == 0  ||	((str[i] != ' ' 
			|| str[i] != '\t') &&  (str[i - 1] == ' ' || str[i - 1] == '\t'))))
			ft_putchar(str[i]);
		else if (ft_is_lowercase(str[i]) == 1 && (i == 0  || ((str[i] != ' ' 
			|| str[i] != '\t') &&  (str[i - 1] == ' ' || str[i - 1] == '\t'))))
			ft_putchar(str[i] - 32);
		else if (ft_is_uppercase(str[i]) == 1)
			ft_putchar(str[i] + 32);
		else 
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
