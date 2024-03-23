#include <stdio.h>
#include "libft.h"

char	**ft_split(char const *s, char c);

int	main(void)
{
	char const *s = "hello! this is a test string for splitting.";
	char c = ' ';
	char **result = ft_split(s, c);

	if (result)
	{
		printf("Split successful\n");
		for (int i = 0; result[i] != NULL; i++)
		{
			printf("%s\n", result[i]);
		}
		for (int i = 0; result[i] != NULL; i++)
		{
			free(result[i]);
		}
		free(result);
	}
	else
	{
		printf("Error: allocation failed or input is NULL.\n");
	}
	return (0);
}
