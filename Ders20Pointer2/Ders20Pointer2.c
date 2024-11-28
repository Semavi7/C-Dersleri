#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	int sayi = 20;
	int* s = &sayi;

	printf("Deger: %d\n", sayi);
	printf("Adres: %x", s);

	char harf = 'a';
	char* h = &harf;

	printf("\n\n---------\n\n");

	printf("harf: %c\n", harf);
	printf("Adres: %x", h);


	return 0;
}