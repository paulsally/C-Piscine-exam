#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

void print_buffer(const char *buf, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (buf[i] == '\0')
			printf("\\0");
		else
			printf("%c", buf[i]);
	}
	printf("\n");
}

int	main(void)
{
	char	dest[20] = "";
	char	dest_ref[20] = "";

	printf("%s\n", ft_strcat(dest, "abc"));
	printf("%s\n", strcat(dest_ref, "abc"));
	print_buffer(dest, 10);
	return (0);
}
