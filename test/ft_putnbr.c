#include <unistd.h>
#include <limits.h>

int	ft_strlen_nbr(int nbr)
{
	int	count;

	count = 1;
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa_smp(int nbr, char *ptr_nbr_str)
{
	char	*ptr_nbr_str_start;

	ptr_nbr_str_start = ptr_nbr_str;
	*ptr_nbr_str = '-';
	ptr_nbr_str++;
	while (nbr > 0)
	{
		*ptr_nbr_str = (nbr % 10) + '0';
		nbr /= 10;
		ptr_nbr_str++;
	}
	return (ptr_nbr_str_start);
}

void	ft_putnbr(int nbr)
{
	int		len_int_min;
	char	nbr_str[12];
	char	*ptr_nbr_str;

	if (nbr == INT_MIN)
	{
		len_int_min = ft_strlen_nbr(INT_MIN);
		ptr_nbr_str = ft_itoa_smp(INT_MIN, nbr_str);
		write (1, ptr_nbr_str, len_int_min);
		return ;
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
}