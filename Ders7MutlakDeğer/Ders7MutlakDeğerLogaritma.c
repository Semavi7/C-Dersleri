#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	double sayi, sonuc;
	printf("Say�y� Girin: ");
	scanf("%lf", &sayi);
	sonuc = fabs(sayi);
	printf("Sonuc: %.lf", sonuc);
    //- girilen de�erin +'s�n� bulur
	printf("\n");
	double sayi2,sonuc2;
	printf("Say�y� Giriniz: ");
	scanf("%lf", &sayi2);
	sonuc2 = log(sayi2);
	printf("Sonuc: %.lf", sonuc2);
	//log Logaritma �n hesapl�yor e taban�nda 10 taban� i�in log10 yaz�l�r

	return 0;
}