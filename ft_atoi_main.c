#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	const char	*str = "   -12345";
	int		num = ft_atoi(str);
	printf("The converted number is: %d\n", num);
	return 0;
}
