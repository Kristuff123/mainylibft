#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c);

int	main(void)
{
	char test_char = 'A';

	if (ft_isascii(test_char))
	{
		printf("%c is ascii.\n", test_char);
	}
	else
	{
		printf("%c is not ascii\n", test_char);
	}
	return 0;
}
