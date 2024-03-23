#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char *str1 = "Hello";
	const char *str2 = "Hell";
	size_t n = 5;
	int result = ft_strncmp(str1, str2, n);
	
	if (result == 0)
	{
		printf("fst %zu chrs of \"%s\" \"%s\" r e\n", n, str1, str2);
	}
	else if (result < 0)
	{
		printf("f %zu ch of \"%s\" r l \"%s\".\n", n, str1, str2);
	}
	else
	{
		printf("f %zu ch of \"%s\" r g \"%s\".\n", n, str1, str2);
	}
	return 0;
}
