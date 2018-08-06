/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 18:37:40 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/25 18:37:42 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		is_whitespaces(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

void	rostring(char *str)
{
	int		i;
	int		start;
	int		end;

	i = 0;
	while (str[i] && is_whitespaces(str[i]))
		i++;
	start = i;
	while (str[i] && !(is_whitespaces(str[i])))
		i++;
	end = i;
	while (str[i])
	{
		while (str[i] && is_whitespaces(str[i]))
			i++;
		if (str[i] && !(is_whitespaces(str[i])))
		{
			while (str[i] && !(is_whitespaces(str[i])))
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, " ", 1);
		}
	}
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}