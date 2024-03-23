#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int main() 
{
    	const char *str = "Hello, dude!";
    	int target_char = 'd';
	char *result = ft_strrchr(str, target_char);

    	if (result != NULL) 
	{
        	printf("Found'%c': %ld\n", (char)target_char, result - str);
    	} 
	else 
	{
        	printf("'%c' not found in the string.\n", (char)target_char);
    	}
    	return 0;
}
