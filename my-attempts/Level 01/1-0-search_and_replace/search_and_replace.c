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
	char	*str_old;
	char	*str_new;
	char	c_old;
	char	c_new;
	int		i;
	int		char_found;

	if (argc == 4)
	{
		str_old = argv[1];
		c_old = *argv[2];
		c_new = *argv[3];
		str_new = str_old;
		i = 0;
		char_found = 0;
		while (str_old[i])
		{
			if (str_old[i] == c_old)
			{
				char_found = 1;
				str_new[i] = c_new;
			}
			i++;
		}
		if (char_found == 1)
			write (1, str_new, i);
		else
			write (1, str_old, i);
	}
	write (1, "\n", 1);
}
