#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main()
{
	char	arr1[] = {1, 2, 3, 4};
	char	arr2[] = {1, 2, 3, 5};
	int	result = ft_memcmp(arr1, arr2, 3);
	printf("%d\n", result);
	return (0);
}
