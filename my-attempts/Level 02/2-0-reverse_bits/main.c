#include <unistd.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet);
void			print_binary(unsigned char byte);

void	print_binary(unsigned char byte)
{
	int	i;

	i = 8;
	while (i--)
	{
		if (byte & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	octet;
	char	result;
	char	c;

	if (argc == 2)
	{
		octet = (unsigned char)atoi(argv[1]);
		result = reverse_bits(octet);
		c = result;

		//write (1, &c, 1);
		print_binary(c);
	}
}
