#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dortgen(int uzun, int kisa)
{
	int i, j;
	for (i = 1;i <= uzun;i++)
	{
			for (j = 1;j <= kisa;j++)
			{
				if (j==1||j==kisa||i==1||i==uzun)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		printf("\n");
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");
	int uzunkenar, kisakenar;
	printf("Uzun Kenar: ");
	scanf("%d", &uzunkenar);
	printf("Kýsa Kenar: ");
	scanf("%d", &kisakenar);
	printf("\n");
	dortgen(uzunkenar, kisakenar);


	return 0;
}