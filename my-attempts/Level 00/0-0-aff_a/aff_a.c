/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:38:04 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc != 2)
	{
		write (1, "a\n", 2);
		return (0);
	}
	ptr = argv[1];
	while (*ptr)
	{
		if (*ptr == 'a')
		{
			write (1, "a", 1);
			break ;
		}
		ptr++;
	}
	write (1, "\n", 1);
	return (0);
}
