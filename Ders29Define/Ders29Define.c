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
	printf("T�rk�e Netiniz: ");
	scanf("%d", &turkce);
	printf("Matematik Netiniz: ");
	scanf("%d", &matematik);
	printf("Fen Netiniz: ");
	scanf("%d", &fen);
	printf("Sosyal Netiniz: ");
	scanf("%d", &sosyal);
	float sozelpuan, say�salpuan;
	sozelpuan = turkce * puant + matematik * puanm + fen * puanf + sosyal * puans * 50.25;
	say�salpuan = turkce * puant + matematik * puanm + fen * puanf + sosyal * puans * 56.45;
	printf("Toplam S�zel Puan�n�z: %.2f\n",sozelpuan);
	printf("Toplam Say�sal Puan�n�z: %.2f\n", say�salpuan);


	return 0;
}