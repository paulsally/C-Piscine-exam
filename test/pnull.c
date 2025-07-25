#include <unistd.h>

int	main(void)
{
	char	*str;

	str = "bc";
	while (*str)
	{
		write (1, "a", 1);
		str++;
	}
}