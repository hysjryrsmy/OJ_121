#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a, b;
	scanf("%c %c", &a, &b);
	if ((a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O'))
	{
		printf("MING\n");
	}
	if ((a == 'O' && b == 'H') || (a == 'Y' && b == 'O') || (a == 'H' && b == 'Y'))
	{
		printf("LI\n");
	}
	if ((a == 'O' && b == 'O') || (a == 'Y' && b == 'Y') || (a == 'H' && b == 'H'))
	{
		printf("TIE\n");
	}
	return 0;
}


