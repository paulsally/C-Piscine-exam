/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
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

	if (argc > 1)
	{
		ptr = argv[1];
		while (*ptr)
		{
			write (1, ptr, 1);
			ptr++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
