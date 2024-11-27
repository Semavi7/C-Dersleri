#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Struct: Aralarýnda mantýksal iliþki bulunan fakat farklý türde olan bilgilerdir.

struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};

int main() {
	setlocale(LC_ALL, "Turkish");

	struct kitapbilgi kb = { "sekerportakali","vasconceulos",10,7.25 };
	printf("Kitap Ad: %s\n",kb.kitapad);
	printf("Yazar: %s\n", kb.yazar);
	printf("Fiyat: %d\n", kb.fiyat);
	printf("Puan: %.2f", kb.puan);

	return 0;
}