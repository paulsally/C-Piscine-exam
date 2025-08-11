/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarpolse <sarpolse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:02:59 by sarpolse          #+#    #+#             */
/*   Updated: 2025/08/04 23:14:07 by sarpolse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size == 0)
		return (s_len);
	if (size <= d_len)
		return (size + s_len);
	dest += d_len;
	i = 0;
	while (*src && i < size - d_len - 1)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (d_len + s_len);
}
