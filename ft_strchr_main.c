#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char *str = "Hello, dude!";
	int target_char = 'd';
	char *result = ft_strchr(str, target_char);
	
	if (result != NULL)
	{
		printf("Found '%c' at position: %ld\n", (char)target_char, result - str);
	}
	else
	{
		printf("'%c' not found in the string.\n", (char)target_char);
	}
	return 0;
}
