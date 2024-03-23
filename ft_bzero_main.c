#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n);
//good test !!!
int	main(void)
{
	size_t	size = 10;
	int	*arr1 = malloc(size * sizeof(int));
	int	*arr2 = malloc(size * sizeof(int));

	ft_bzero(arr1, size * sizeof(int));
	memset(arr2, 0, size * sizeof(int));
	if (memcmp(arr1, arr2, size * sizeof(int)) == 0)
	{
		printf("Memory areas are equal. ft_bzero() works correctly!\n");
	}
	else
	{
		printf("Mem areas not equal. ft_bzero() doesn't work correctly!\n");
	}
	free(arr1);
	free(arr2);
	return (0);
}
