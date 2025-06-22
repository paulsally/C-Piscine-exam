/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:38:04 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	digit;

	number = 0;
	while (number <= 9)
	{
		digit = '0' + number;
		write (1, &digit, 1);
		number++;
	}
}
