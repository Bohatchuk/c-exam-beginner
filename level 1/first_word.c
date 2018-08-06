/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 23:20:23 by dbohatch          #+#    #+#             */
/*   Updated: 2017/10/05 23:20:37 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *av)
{
	int i;
	
	i = 0;
	while (av[i] <= 32 && av[i] != '\0')
	{	
		i++;
	}
	while (av[i] > 32)
	{
		ft_putchar(av[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		first_word(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
