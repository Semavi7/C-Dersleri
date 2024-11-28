#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int kupbul(int sayi) {
	int sonuc = sayi * sayi * sayi;
	return sonuc;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int s;
	printf("Sayýyý Girin: ");
	scanf("%d", &s);
	printf("\n\nSonuc: %d", kupbul(s));


	return 0;
}