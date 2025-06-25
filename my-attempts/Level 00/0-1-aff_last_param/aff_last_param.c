/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <angavrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:46:21 by angavrel          #+#    #+#             */
/*   Updated: 2017/07/14 12:29:50 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*ptr;

	if (argc > 1)
	{
		ptr = argv[argc - 1];
		while (*ptr)
		{
			write (1, ptr++, 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
