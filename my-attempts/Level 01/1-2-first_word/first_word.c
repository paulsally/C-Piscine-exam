/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 23:01:43 by polselli          #+#    #+#             */
/*   Updated: 2025/06/30 00:21:02 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t')
			str++;
		while (*str && *str != ' ' && *str != '\t')
		{
			write (1, str, 1);
			str++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
