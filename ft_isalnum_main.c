#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c);

int	main(void)
{
	char test_char = 'A';

	if (ft_isalnum(test_char))
	{
		printf("%c is alphanumeric \n", test_char);
	}
	else
	{
		printf("%c is not alphanumeric.\n", test_char);
	}
	return 0;
}
