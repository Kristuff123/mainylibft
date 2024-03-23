#include <stdlib.h>
#include <stdio.h>
#include "stdlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

static char	sample_function(unsigned int index, char c)
{
	index = '\0';
	if (c >= 'a' && c <= 'z')
	{
		return c - 32;
	}
	return (c);
}

int	main(void)
{
	const char	*test_string = "Hello, world!";
	char	*result = ft_strmapi(test_string, sample_function);

	printf("Original string: %s\n", test_string);
	printf("Modified string: %s\n", result);
	free(result);
	return (0);
}
