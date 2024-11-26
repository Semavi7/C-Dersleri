#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char kitap[40];
	printf("Ad: ");
	scanf("%s", kitap);
	printf("%s", kitap);
	printf("\n");
	printf("%18s", kitap);
	printf("\n");
	printf("%20.5s", kitap);
	printf("\n");
	printf("%-20s", kitap);


	return 0;
}