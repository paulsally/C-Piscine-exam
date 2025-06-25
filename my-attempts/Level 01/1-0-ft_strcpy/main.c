/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:38:04 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2);

int	main(void)
{
	char	s1[1024];
	char	*s2;
	//size_t	len;
	char	*ret;

	s2 = "Probably long with spaces";
	//len = strlen(s2);
	ret = ft_strcpy (s1, s2);

	//printf("Source: %s\n", s2);
	//printf("Copied: %s\n", s1);
	//for (size_t i = 0; i < len + 2; i++)
	//{
	//	printf("s1[%zu] = '%c' (%d)\n", i, s1[i], s1[i]);
	//}
	// Print ret as a string
	printf("As string: '%s'\n", ret);
    	// Print pointer difference
	printf("Address of dest:    %p\n", (void *)s1);
	printf("Address returned:   %p\n", (void *)ret);
	return (0);
}
