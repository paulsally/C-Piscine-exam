/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 17:18:58 by polselli          #+#    #+#             */
/*   Updated: 2025/06/29 23:07:24 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;

	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{
			c = *str;
			if (c >= 'A' && c <= 'Z')
				c = (c - 'A' + 13) % 26 + 'A';
			else if (c >= 'a' && c <= 'z')
				c = (c - 'a' + 13) % 26 + 'a';
			write (1, &c, 1);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
