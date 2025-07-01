#include <stdlib.h>

void	ft_swap(int *a, int *b);

// int	main(int argc, char **argv)
// {
// 	int	a;
// 	int	b;

// 	if (argc == 3)
// 	{
// 		a = atoi(argv[1]);
// 		b = atoi(argv[2]);
// 		ft_swap(&a, &b);
// 	}
// 	return (0);
// }

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	ft_swap(&a, &b);
}
