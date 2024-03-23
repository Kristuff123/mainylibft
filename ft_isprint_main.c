#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c);

int	main(void)
{
	char test_char = 'A';

	if (ft_isprint(test_char))
	{
		printf("%c is a printable character.\n", test_char);
	}
	else
	{
		printf("%c is not a printable character.\n", test_char);
	}
	return 0;
}
