#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	//Karek�k Bulma

	int sayi;
	double sonuc;

	printf("Say�y� Giriniz: ");
	scanf("%d", &sayi);
	sonuc = sqrt(sayi);
	printf("Sonuc: %.1f", sonuc);
	//%. De�er virg�lden sonra ka� rakam g�sterilece�ini belirler.


	return 0;
}