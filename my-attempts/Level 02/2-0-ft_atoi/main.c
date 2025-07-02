#include <stdio.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	int	result;

	result = 0;
	if (argc == 2)
	{
		result = ft_atoi(argv[1]);
		printf("%d\n", result);
	}
	return (0);
}
