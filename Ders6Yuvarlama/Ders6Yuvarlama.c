#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	//double i�in klavyeden veri al�rken %lf kullan�yoruz. %.f yap�nca say� tamsay� olur.
	
	double sayi, sonuc1, sonuc2;

	printf("De�eri Giriniz: ");
	scanf("%lf", &sayi);
	sonuc1 = floor(sayi);
	printf("Sonu�: %.f", sonuc1);
	printf("\n");
	sonuc2 = ceil(sayi);
	printf("Sonu�: %.f", sonuc2);


	return 0;
}