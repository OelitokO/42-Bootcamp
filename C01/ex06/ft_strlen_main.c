#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *string)
{
	int	n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}

int	main()
{
	char *str = "42Kocaeli";
	printf("%d", ft_strlen(str));
}
