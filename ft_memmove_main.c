#include <stdio.h>
#include <string.h> // For strcmp

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char src[] = "Hello, dude!";
	char dest[20];
	
	ft_memmove(dest, src, strlen(src) + 1);
	printf("Copied string: %s\n", dest);
	char dest_std[20];
	memmove(dest_std, src, strlen(src) + 1);
	printf("Result from standard memmove: %s\n", dest_std);
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
