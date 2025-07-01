/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:56:14 by polselli          #+#    #+#             */
/*   Updated: 2025/07/01 22:23:47 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*end;
	int		i;

	if (argc == 2)
	{
		str = argv[1];
		end = str;
		while (*end)
		{
			end++;
		}
		end--;
		while (end >= str)
		{
			write (1, end, 1);
			end--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
