#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char	*ret;

	ret = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (ret);
}
int	main(void)
{
	char	*dest;
	char	*src;

	dest = "";
	src = "Hello World!";
	ft_strcpy(dest, src);
	while (*dest)
	{
		write (1, dest, 1);
		dest++;
	}
	return (0);
}