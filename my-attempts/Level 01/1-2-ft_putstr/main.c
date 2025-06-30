#include <unistd.h>

void	ft_putstr(char *str);


int	main(int argc, char **argv)
{
	char	*temp;

	if (argc == 2)
	{
		temp = argv[1];
		ft_putstr(temp);
		return (0);
	}
	write (1, "\n", 1);
}
