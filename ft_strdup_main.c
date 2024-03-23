#include <stdio.h>
#include <string.h> // For strcmp
#include <stdlib.h>

char	*ft_strdup(const char *str);

int	main(void)
{
	const char	*original_string = "Hello, world!";
	char		*duplicate_string = ft_strdup(original_string);

	if (duplicate_string != NULL)
	{
		printf("Original string: %s\n", original_string);
		printf("Duplicate string: %s\n", duplicate_string);
		if (strcmp(original_string, duplicate_string) == 0)
		{
			printf("The duplicate matches the original\n");
		}
		else
		{
			printf("Error:duplicate doesn't match original\n");
		}
		free(duplicate_string);
	}
	else
	{
		printf("Error: Memory allocation failed.\n");
	}
	return (0);
}
