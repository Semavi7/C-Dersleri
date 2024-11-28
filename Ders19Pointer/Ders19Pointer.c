#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	int sayi = 10;
	int sayi2 = 20;
	double sayi3 = 10.25;
	char kelime = 'a';

	printf("%d\n", sayi);
	printf("%d\n", sayi2);
	printf("%f\n", sayi3);
	printf("%c", kelime);

	printf("\n\nBellek Adresleri\n\n");

	printf("%x\n", & sayi);
	printf("%x\n", &sayi2);
	printf("%x\n", &sayi3);
	printf("%x\n", &kelime);


	return 0;
}