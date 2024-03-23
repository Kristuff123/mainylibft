#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int main()
{
	char str[50] = "Hello, world!";
	printf("Before ft_memset: %s\n", str);
	ft_memset(str, 'a', 5);
	printf("After ft_memset: %s\n", str);
	return 0;
}
