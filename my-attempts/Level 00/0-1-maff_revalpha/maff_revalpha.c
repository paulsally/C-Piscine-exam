/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:46:21 by angavrel          #+#    #+#             */
/*   Updated: 2017/07/14 12:29:50 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	c;
	char	c_upper;

	c = 'z';
	while (c >= 'a')
	{
		if (c % 2 == 0)
		{
			write (1, &c, 1);
		}
		else
		{
			c_upper = c - 32;
			write (1, &c_upper, 1);
		}
		c--;
	}
	write (1, "\n", 1);
	return (0);
}
