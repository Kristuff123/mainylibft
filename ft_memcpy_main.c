#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char src[] = "Hello, dude!"; // Source string
	char dest[20]; // Destination string
	// Test our ft_memcpy function
	ft_memcpy(dest, src, strlen(src) + 1); //
	// Print the result
	printf("Copied string: %s\n", dest);
	// Compare with the result from standard library memcpy
	char dest_std[20];
	memcpy(dest_std, src, strlen(src) + 1); // Using standard library memcpy
	printf("Result from standard memcpy: %s\n", dest_std);
	// Check if both results are the same
	if (strcmp(dest, dest_std) == 0)
	{
		printf("Results match!\n");
	}
	else
	{
		printf("Results don't match!\n");
	}
	return 0;
}
