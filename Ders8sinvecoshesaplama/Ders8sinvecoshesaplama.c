#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	double derece, sonucsin, sonuccos;
	printf("Dereceyi Girin: ");
	scanf("%lf", &derece);
	sonucsin = sin(derece);
	printf("Sinus: %lf \n",sonucsin);
	sonuccos = cos(derece);
	printf("Cosinus: %lf", sonuccos);


	return 0;
}