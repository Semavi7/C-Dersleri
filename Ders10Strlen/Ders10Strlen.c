#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char kelime[100];
	printf("Kelimeyi Giriniz: ");
	gets(kelime);
	printf("Katar Uzunluðu: %d", strlen(kelime));


	return 0;
}