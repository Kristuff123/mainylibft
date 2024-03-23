#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n);
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char *str = "Hello, dude!";
	char target_char = 'd';
	size_t n = 13;
	void *result = ft_memchr(str, target_char, n);

	if (result != NULL)
	{
		printf("Fnd '%c' pos: %ld\n", target_char, (char *)result - str);
	}
	else
	{
		printf("'%c' not found in the string.\n", target_char);
	}
	return 0;
}
