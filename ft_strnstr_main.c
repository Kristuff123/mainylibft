#include <stdio.h>
#include "libft.h"

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *hay, const char *need, size_t len);

int	main(void)
{
	const char	*haystack = "Hello World, this is awesome!";
	const char	*needle = "World";
	size_t		len = str_len(haystack);
	char		*re = ft_strnstr(haystack, needle, len);
	
	if (re != NULL)
		printf("Sub at i %ld: %s\n", re - haystack, re);
	else
		printf("Substring not found.\n");
	return (0);
}
