#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[1024];
	char	*tp;

	src = "Very long string to copy";
	ft_strcpy(dest, src);
	tp = dest;
	while (*tp)
	{
		write (1, tp, 1);
		tp++;
	}
}
