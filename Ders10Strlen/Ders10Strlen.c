#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char kelime[100];
	printf("Kelimeyi Giriniz: ");
	gets(kelime);
	printf("Katar Uzunlu�u: %d", strlen(kelime));


	return 0;
}