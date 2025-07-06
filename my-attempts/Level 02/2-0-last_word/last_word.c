/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polselli <polselli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:42:34 by polselli          #+#    #+#             */
/*   Updated: 2025/07/06 14:37:39 by polselli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		len;

	if (argc == 2)
	{
		str = argv[1];
		len = 0;
		while (str[len])
			len++;
		while (len > 0 && (str[len - 1] == '\t' || str[len - 1] == ' '))
			len--;
		while (len > 0 && str[len - 1] != '\t' && str[len -1] != ' ')
			len--;
		while (str[len] && str[len] != '\t' && str[len] != ' ')
		{
			write (1, &str[len], 1);
			len++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
