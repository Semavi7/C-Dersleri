#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char harf = 'k';
	char* pt = &harf;

	printf("Adres: %x\n", pt);
	pt++;
	printf("Adres2: %x\n", pt);
	pt--;
	printf("Adres3: %x\n", pt);
	pt = pt+5;
	printf("Adres4: %x", pt);


	return 0;
}