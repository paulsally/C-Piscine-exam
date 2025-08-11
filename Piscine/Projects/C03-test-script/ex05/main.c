#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest_ft[10] = "Ciao";
	char			dest_ref[10] = "Ciao";
	//unsigned int	ret_ft;
	char	*src;

	src = "Aloha";
	printf("ft_strlcat: %u - dest_ft: %s\n", ft_strlcat(dest_ft, src, sizeof(dest_ft)), dest_ft);
	printf("strlcat: %zu - dest_ref: %s\n", strlcat(dest_ref, src, sizeof(dest_ft)), dest_ref);

	// ret_ft = ft_strlcat(dest_ft, src, sizeof(dest_ft));
	// printf("%d\n", ret_ft);
	// if (ret_ft >= sizeof(dest_ft))
	// 	printf("Truncation occurred\n");
	// return (0);
}
