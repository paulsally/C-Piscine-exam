#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main()
{
	int tab[5];
	int	sz;
	int	i;

	tab[0] = 7;
	tab[1] = 2;
	tab[2] = 8;
	tab[3] = 4;
	tab[4] = 3;
	sz = 5;
	ft_sort_int_tab(tab, sz);
	for (i = 0; i < sz; i++)
	{
		printf ("%d, ", tab[i]);
	}
	return (0);
}