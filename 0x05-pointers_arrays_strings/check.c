#include <stdio.h>

int main(void)
{
	int i, n, j;
	char *str = "Tod123";

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%d\n", i);
	n = 0;
	j = 0;
	while (j < i)
	{
		if (str[j] > '0' && str[j] < '9')
		{
			n = n * 10 + (str[j] - '0');
		}
		j++;
	}
	printf("%d\n", n);
	return (0);
}
