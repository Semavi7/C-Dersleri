#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Enum yap�s�: Karar mekanizmas�n�n �ok dalland��� durumlarda kullan�l�r.
enum sehirler
{
     hatali,adana,adiyaman,afyon,agri,amasya,ankara,antalya
};

int main() {
	setlocale(LC_ALL, "Turkish");

	enum sehirler il;
	il = amasya;
	printf("%d", il);


	return 0;
}