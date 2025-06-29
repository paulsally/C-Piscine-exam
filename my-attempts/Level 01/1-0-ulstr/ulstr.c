/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:05:04 by polselli          #+#    #+#             */
/*   Updated: 2025/06/29 06:49:11 by polselli         ###   ########.fr       */
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
				c += 32;
			else if (c >= 'a' && c <= 'z')
				c -= 32;
			write (1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
