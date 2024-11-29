#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define puant 2.19
#define puanm 3.47
#define puanf 2.48
#define puans 1.75

int main() {
	setlocale(LC_ALL, "Turkish");

	int turkce, matematik, fen, sosyal;
	printf("Türkçe Netiniz: ");
	scanf("%d", &turkce);
	printf("Matematik Netiniz: ");
	scanf("%d", &matematik);
	printf("Fen Netiniz: ");
	scanf("%d", &fen);
	printf("Sosyal Netiniz: ");
	scanf("%d", &sosyal);
	float sozelpuan, sayýsalpuan;
	sozelpuan = turkce * puant + matematik * puanm + fen * puanf + sosyal * puans * 50.25;
	sayýsalpuan = turkce * puant + matematik * puanm + fen * puanf + sosyal * puans * 56.45;
	printf("Toplam Sözel Puanýnýz: %.2f\n",sozelpuan);
	printf("Toplam Sayýsal Puanýnýz: %.2f\n", sayýsalpuan);


	return 0;
}