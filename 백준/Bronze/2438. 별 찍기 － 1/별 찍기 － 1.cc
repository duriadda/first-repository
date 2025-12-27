#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, a, b;

	scanf("%d", &i);

	for (a = 1; a <= i; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}

}