#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c);

int	main(void)
{
	char test_char = 'A';

	if (ft_isalpha(test_char))
	{
		printf("%c is alpha\n", test_char);
	}
	else
	{
		printf("%c is not alpha\n", test_char);
	}
	return 0;
}
