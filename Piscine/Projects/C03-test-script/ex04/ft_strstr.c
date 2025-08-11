/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarpolse <sarpolse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:09:40 by sarpolse          #+#    #+#             */
/*   Updated: 2025/08/04 17:38:44 by sarpolse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	if (!*to_find)
		return (str);
	while (*str)
	{
		haystack = str;
		needle = to_find;
		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (str);
		str++;
	}
	return (NULL);
}
