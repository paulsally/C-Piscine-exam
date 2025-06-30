/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:31:59 by polselli          #+#    #+#             */
/*   Updated: 2025/07/01 00:14:29 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar (n % 10 + '0');
}

void	ft_putstr(char *str)
{
	int		len;
	char	*temp;

	len = 0;
	temp = str;
	while (*temp)
	{
		len++;
		temp++;
	}
	write (1, str, len);
}

int	main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr ("fizzbuzz");
		else if (i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
