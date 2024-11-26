#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	double sayi, sonuc;
	printf("Sayýyý Girin: ");
	scanf("%lf", &sayi);
	sonuc = fabs(sayi);
	printf("Sonuc: %.lf", sonuc);
    //- girilen deðerin +'sýný bulur
	printf("\n");
	double sayi2,sonuc2;
	printf("Sayýyý Giriniz: ");
	scanf("%lf", &sayi2);
	sonuc2 = log(sayi2);
	printf("Sonuc: %.lf", sonuc2);

	return 0;
}