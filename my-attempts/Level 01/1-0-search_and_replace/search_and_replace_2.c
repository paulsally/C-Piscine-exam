/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:38:04 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	search_and_replace(char *str, char c_old, char c_new)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c_old)
			str[i] = c_new;
		i++;
	}
	ft_putstr(str);
}

int	is_valid(char *a, char *b)
{
	return (a[1] == '\0' && b[1] == '\0');
}

int	main(int argc, char **argv)
{
	if (argc == 4 && is_valid(argv[2], argv[3]))
		search_and_replace(argv[1], *argv[2], *argv[3]);
	write(1, "\n", 1);
	return (0);
}
