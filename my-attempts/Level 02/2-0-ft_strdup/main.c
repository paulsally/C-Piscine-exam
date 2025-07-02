#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*result;
	int		len;

	if (argc == 2)
	{
		result = ft_strdup(argv[1]);
		if (result)
		{
			len = 0;
			while (result[len])
				len++;
			write(1, "Original: ", 10);
			write(1, argv[1], len);  // Note: argv[1] has same length
			write(1, "\n", 1);
			write(1, "Duplicate: ", 11);
			write(1, result, len);
			write(1, "\n", 1);
			free(result);  // Don't forget to free!
		}
	}
	else
	{
		write(1, "Usage: ./ft_strdup <string>\n", 29);
	}
	return (0);
}
