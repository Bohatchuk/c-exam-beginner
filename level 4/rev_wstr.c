/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbohatch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 20:09:38 by dbohatch          #+#    #+#             */
/*   Updated: 2017/12/25 20:10:16 by dbohatch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		rev_wstr(char *str, int n)
{
	int		i;

	while (n > 0 && (str[n] == ' ' || str[n] == '\t'))
		n--;
	i = 0;
	while (i <= n && str[n - i] != ' ' && str[n - i] != '\t')
		i++;
	write(1, str + n - i + 1, i);
	while (n > 0 && (str[n] == ' ' || str[n] == '\t'))
		n--;
	if (i < n)
		write(1, " ", 1);
	return (n - i);
}

int		main(int argc, char **argv)
{
	int		i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i > 0)
			i = rev_wstr(argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}