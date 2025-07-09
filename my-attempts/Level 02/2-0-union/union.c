/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:41:44 by polselli          #+#    #+#             */
/*   Updated: 2025/07/10 00:49:54 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		already_printed(char c, char *str, int index);

void	print_union(char *str_1, char *str_2);

int	already_printed(char c, char *str, int str_idx)
{
	int	c_idx;

	c_idx = 0;
	while (c_idx < str_idx)
	{
		if (c == str[c_idx])
			return (1);
		c_idx++;
	}
	return (0);
}

void	print_union(char *str_1, char *str_2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str_1[i])
	{
		if (!already_printed(str_1[i], str_1, i))
		{
			write (1, &str_1[i], 1);
		}
		i++;
	}
	while (str_2[j])
	{
		if (!already_printed(str_2[j], str_2, j)
			&& !already_printed(str_2[j], str_1, i))
		{
			write (1, &str_2[j], 1);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	char	*str_1;
	char	*str_2;

	if (argc == 3)
	{
		str_1 = argv[1];
		str_2 = argv[2];
		print_union(str_1, str_2);
	}
	write (1, "\n", 1);
	return (0);
}
