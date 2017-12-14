#include <stdio.h>
int     main()
{
	int namba = 1263;
	char *ret;

	ret = ft_itoa(namba);

	printf("%s", ret);
    return 0;
}