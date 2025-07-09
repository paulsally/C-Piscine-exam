#include <unistd.h>

unsigned char	swap_bits(unsigned char octet);
void			print_bits(unsigned char byte);

void	print_bits(unsigned char byte)
{
	int	i;

	i = 8;
	while (i--)
	{
		write (1, byte >> i & 1 ? "1" : "0",1);
	}
}

int	main(void)
{
	unsigned char	octet;
	unsigned char	swapped;

	octet = 0b01000001; // result 00010100
	swapped = swap_bits(octet);
	print_bits(swapped);
	write (1, "\n", 1);
	return (0);
}
