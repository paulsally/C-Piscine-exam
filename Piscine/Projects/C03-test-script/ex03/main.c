#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "ciao";
	char	dest_ref[20] = "ciao";

	printf("%s\n", ft_strncat(dest, "aoh", 2));
	printf("%s\n", strncat(dest_ref, "aoh", 2));
	return (0);
}
