#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char bilgi[40];
	printf("Bilgiyi Girin: ");
	gets(bilgi);
	printf("\n\n");
	puts(bilgi);


	return 0;
}