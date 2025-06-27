/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
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
	char	*str;
	char	*c_old;
	char	*c_new;
	int		i;

	if (argc == 4)
	{
		str = argv[1];
		c_old = argv[2];
		c_new = argv[3];
		if (c_old[1] == '\0' && c_new[1] == '\0')
		{
			i = 0;
			while (str[i])
			{
				if (str[i] == *c_old)
					write (1, c_new, 1);
				else
					write (1, &str[i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
