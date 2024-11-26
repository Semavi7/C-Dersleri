#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	//Karekök Bulma

	int sayi;
	double sonuc;

	printf("Sayýyý Giriniz: ");
	scanf("%d", &sayi);
	sonuc = sqrt(sayi);
	printf("Sonuc: %.1f", sonuc);
	//%. Deðer virgülden sonra kaç rakam gösterileceðini belirler.


	return 0;
}