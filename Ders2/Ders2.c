#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	int el, bagaj, eltoplam, bagajtoplam, toplam;

	printf("El bagajý aðrlýðýný kilo cinsinden giriniz: ");
	scanf("%d", &el);

	printf("Normal bagaj aðýrlýðýný kilo cinsinden giriniz: ");
	scanf("%d", &bagaj);

	if (el < 8)
	{
		eltoplam = 0;
	}
	else
	{
		eltoplam = (el - 8) * 4;
	}
	if (bagaj < 15)
	{
		bagajtoplam = 0;
	}
	else
	{
		bagajtoplam = (bagaj - 15) * 5;
	}

	toplam = eltoplam + bagajtoplam;

	printf("Toplam: %d", toplam);


	return 0;
}