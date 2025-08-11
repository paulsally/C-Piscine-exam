#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("ft_strstr: %s\n", ft_strstr("haystack", "needle"));
	printf("strstr: %s\n", strstr("haystack", "needle"));
	printf("ft_strstr: %s\n", ft_strstr("haystack", "st"));
	printf("strstr: %s\n", strstr("haystack", "st"));
	printf("ft_strstr: %s\n", ft_strstr("haystack", ""));
	printf("strstr: %s\n", strstr("haystack", ""));
	printf("ft_strstr: %s\n", ft_strstr("needl", "needle"));
	printf("strstr: %s\n", strstr("needl", "needle"));
	return (0);
}
