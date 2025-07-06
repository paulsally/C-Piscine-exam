/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:28:09 by polselli          #+#    #+#             */
/*   Updated: 2025/07/06 11:39:32 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printed(char c, char *start, char *current)
{
	while (start < current)
	{
		if (*start == c)
		{
			return (1);
			break ;
		}
		start++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str_1;
	char	*str_2;

	if (argc == 3)
	{
		str_1 = argv[1];
		while (*str_1)
		{
			str_2 = argv[2];
			while (*str_2)
			{
				if (*str_1 == *str_2 && !is_printed(*str_1, argv[1], str_1))
				{
					write (1, str_1, 1);
					break ;
				}
				str_2++;
			}
			str_1++;
		}
	}
	write (1, "\n", 1);
}
