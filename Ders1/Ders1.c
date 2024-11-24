#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	//goto: Kodu belirlenen yere geri gönderir.

	int sayi1, sayi2, buyuk, kucuk, toplam = 0, i;

yeniden:

	printf("Sayi 1 : ");
	scanf("%d", &sayi1);

	printf("Sayi 2 : ");
	scanf("%d", &sayi2);

	if (sayi1 == sayi2)
	{
		goto yeniden;
	}
	else
	{
		if (sayi1 > sayi2)
		{
			buyuk = sayi1;
			kucuk = sayi2;
		}
		else
		{
			buyuk = sayi2;
			kucuk = sayi1;
		}

		for (i = kucuk;i <= buyuk;i++)
		{
			toplam = toplam + i;
		}

		printf("Toplam= %d", toplam);
	}


	return 0;
}