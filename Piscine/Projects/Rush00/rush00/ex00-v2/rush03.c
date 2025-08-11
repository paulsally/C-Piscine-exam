/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarpolse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:47:52 by sarpolse          #+#    #+#             */
/*   Updated: 2025/07/19 19:48:07 by sarpolse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	choose_char(int i, int j, int x, int y)
{
	if (i == 1 || i == y)
	{
		if (j == 1)
			ft_putchar('A');
		else if (j > 1 && j < x)
			ft_putchar('B');
		else if (j == x)
			ft_putchar('C');
		else
			ft_putchar('W');
	}
	else if (i > 1 && i < y)
	{
		if (j == 1 || j == x)
			ft_putchar('B');
		else if (j > 1 && j < x)
			ft_putchar(' ');
		else
			ft_putchar('W');
	}
	else
		ft_putchar('W');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			choose_char(i, j, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
