#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char const	*s = "Krzysztof Graczyk";
	unsigned int	start = 7;
	size_t		len = 5;
	char		*sub;

	sub = ft_substr(s, start, len);
	if (sub != NULL)
	{
		printf("Original string: \"%s\"\n", s);
		printf("Sub pos %d len %zu: \"%s\"\n", start, len, sub);
		free(sub);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
