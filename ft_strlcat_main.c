#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	main(void)
{
	char dest[20] = "Hello, "; // Destination string with initial content
	char src[] = "dude!"; // Source string
	size_t total_length = ft_strlcat(dest, src, sizeof(dest));

	printf("Concatenated string: %s\n", dest);
	printf("Total length of concatenated string: %zu\n", total_length);
	return 0;
}
