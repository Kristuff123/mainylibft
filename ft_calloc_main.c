#include <stdio.h>  // For printf
#include <stdlib.h> // For free
#include <string.h> // For memcmp

void	*ft_calloc(size_t num, size_t size);

// Function to test ft_calloc
void	test_ft_calloc(size_t num_elements, size_t element_size)
{
	// Allocate memory using ft_calloc
	int *arr = (int *)ft_calloc(num_elements, element_size);
	// Check if allocation was successful
	if (arr == NULL)
	{
		printf("Memory allocation failed.\n");
		return;
	}
	// Print the allocated memory
	printf("Allocated memory:\n");
	for (size_t i = 0; i < num_elements; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	// Free the allocated memory
	free(arr);
}

int	main(void)
{
    size_t	num_elements = 5;
    size_t	element_size = sizeof(int);

    printf("Test ft_calloc %zu ele -size %zu:\n", num_elements, element_size);
    test_ft_calloc(num_elements, element_size);

    return 0;
}
