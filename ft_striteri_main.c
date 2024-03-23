#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	convert_to_uppercase(unsigned int, char *c)
{
	index = 0;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32; // Convert lowercase to uppercase
		index++;
	}
}

void	apply_ft_striteri(char *s)
{
	ft_striteri(s, &convert_to_uppercase);
}

int main() {
    char str[] = "Hello, world!";

    printf("Original string: %s\n", str);

    // Apply ft_striteri with the convert_to_uppercase function
    apply_ft_striteri(str);

    printf("Modified string: %s\n", str);

    return 0;
}
