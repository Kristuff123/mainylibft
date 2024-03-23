#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = "Hello, dude! hello, dude!";
	char	dest[10];
	size_t	src_len = ft_strlcpy(dest, src, sizeof(dest));
	// Print the copied string and its length
	printf("Copied string: %s\n", dest);
	printf("Length of copied string: %zu\n", src_len);

	return 0;
}
