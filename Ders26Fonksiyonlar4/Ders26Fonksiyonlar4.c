#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dortgen(int kisa, int uzun) {
	int i, j;
	for (i = 0;i < uzun;i++) 
	{
		for (j = 0;j < kisa;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");

	dortgen(3, 5);


	return 0;
}