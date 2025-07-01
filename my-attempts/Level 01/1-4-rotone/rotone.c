/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:26:44 by polselli          #+#    #+#             */
/*   Updated: 2025/07/01 23:18:27 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	write (1, c, 1);
}

void	rotone(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if ((c >= 'A' && c < 'Z') || (c >= 'a' && c < 'z'))
			c += 1;
		else if (c == 'Z' || c == 'z')
			c -= 25;
		ft_putchar(&c);
		str++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		rotone(str);
	}
	ft_putchar("\n");
	return (0);
}
