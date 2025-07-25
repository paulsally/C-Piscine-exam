/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:10:04 by polselli          #+#    #+#             */
/*   Updated: 2025/07/20 04:16:38 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_choosechar(int r, int c, int x, int y)
{
	if ((r == 1 || r == y) && c == 1)
		ft_putchar('A');
	else if ((r == 1 && c > 1 && c < x )
		|| (r > 1 && r < y && (c == 1 || c == x)
			|| r == y && (c == 1 || c == x)))
		ft_putchar('B');
	else if ((r == 1 && c == x) || (r == y && c == x))
		ft_putchar('C');
	else if ((r > 1 && r < y) || (c > 1 && c < x))
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	c_i;
	int	r_i;

	r_i = 1;
	while (r_i <= y)
	{
		c_i = 1;
		while (c_i <= x)
		{
			ft_choosechar(r_i, c_i, x, y);
			c_i++;
		}
		ft_putchar('\n');
		r_i++;
	}
}
