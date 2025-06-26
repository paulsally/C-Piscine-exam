/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:38:04 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat(char a_c)
{
	int	alpha_index;

	if (a_c >= 'A' && a_c <= 'Z')
		alpha_index = a_c - 'A' + 1;
	else if (a_c >= 'a' && a_c <= 'z')
		alpha_index = a_c - 'a' + 1;
	else
		alpha_index = 1;
	while (alpha_index > 0)
	{
		write (1, &a_c, 1);
		alpha_index--;
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str)
		{
			repeat(*str);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
