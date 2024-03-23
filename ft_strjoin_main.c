#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char	*s1 = "krzysztof ";
	char	*s2 = "graczyk";
	char	*result;

	result = ft_strjoin(s1, s2);
	if (result != NULL)
	{
		printf("Concatenated string: %s\n", result);
		free(result); 
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
