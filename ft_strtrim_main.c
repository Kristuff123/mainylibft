#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char const	*s1 = "krzysztof graczyk";
	char const	*set = "krzy";
	char		*trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str != NULL)
	{
		printf("Original string: \"%s\"\n", s1);
		printf("Trimmed string: \"%s\"\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return 0;
}
