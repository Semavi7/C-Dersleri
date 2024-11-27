#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct kayit
{
	char ad[20];
	int no;
	int sinif;
	float ort;
};
struct kayit ogr;

int main() {
	setlocale(LC_ALL, "Turkish");

	printf("Ad Soyad: ");
	scanf("%s", &ogr.ad);
	printf("Numara: ");
	scanf("%d", &ogr.no);
	printf("Sýnýfý: ");
	scanf("%d",&ogr.sinif);
	printf("Ortalama: ");
	scanf("%f", &ogr.ort);
	printf("\n");
	printf("%s\n", ogr.ad);
	printf("%d\n", ogr.no);
	printf("%d\n", ogr.sinif);
	printf("%.2f", ogr.ort);


	return 0;
}