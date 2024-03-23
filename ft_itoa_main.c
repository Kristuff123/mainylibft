#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(void)
{
	int		num1;
	int		num2;
	char	*str1;
	char	*str2;

	num1 = 12345;
	num2 = -6789;
	str1 = ft_itoa(num1);
	str2 = ft_itoa(num2);
	printf("Integer: %d, String: %s\n", num1, str1);
	printf("Integer: %d, String: %s\n", num2, str2);
	free(str1);
	free(str2);
	return (0);
}
