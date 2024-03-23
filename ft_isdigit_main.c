#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c);

int	main(void)
{
	char test_char = 'A';

	if (ft_isdigit(test_char))
	{
		printf("%c is a digit.\n", test_char);
	}
	else
	{
		printf("%c is not a digit\n", test_char);
	}
	return 0;
}
