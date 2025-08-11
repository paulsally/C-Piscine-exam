#include <unistd.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}

int	count_words (char *str)
{
	int		num_w;
	int		new_w;

	if (!*str)
		return (0);
	num_w = 0;
	new_w = 1;
	while (*str)
	{
		if (ft_isspace(*str))
			new_w = 1;
		else
		{
			if (new_w == 1)
			{
				num_w++;
				new_w = 0;
			}
		}
		str++;
	}
	return (num_w);
}

int	main(void)
{
	printf("%d", count_words("   oh madunnina  ciao   "));
	return (0);
}
