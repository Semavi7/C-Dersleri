#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	//double için klavyeden veri alýrken %lf kullanýyoruz. %.f yapýnca sayý tamsayý olur.
	
	double sayi, sonuc1, sonuc2;

	printf("Deðeri Giriniz: ");
	scanf("%lf", &sayi);
	sonuc1 = floor(sayi);
	printf("Sonuç: %.f", sonuc1);
	printf("\n");
	sonuc2 = ceil(sayi);
	printf("Sonuç: %.f", sonuc2);


	return 0;
}