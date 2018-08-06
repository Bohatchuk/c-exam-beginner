/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 20:42:32 by dbohatch          #+#    #+#             */
/*   Updated: 2017/11/27 21:10:52 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_whitespaces(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		ft_is_print(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	else
		return (0);
}

void	epur_str(char *s)
{
	int i;

	i = 0;
	while (ft_is_whitespaces(s[i]) && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (ft_is_whitespaces(s[i]) != 1)
			ft_putchar(s[i]);
		while (ft_is_whitespaces(s[i]) && ft_is_whitespaces(s[i + 1]))
			i++;
		if (ft_is_whitespaces(s[i]) && ft_is_print(s[i + 1]))
			ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
