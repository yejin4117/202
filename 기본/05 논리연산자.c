#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if (++a || ++b && ++c)
	{
		printf("�� ");
	}
	printf("%d %d %d\n", a, b, c);
}