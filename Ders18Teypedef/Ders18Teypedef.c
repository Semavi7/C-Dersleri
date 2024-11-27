#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Typedef: Takma ad gibi düþün. Deðiþkenden deðiþken türetiyor.

typedef int d1;

int main() {
	setlocale(LC_ALL, "Turkish");
	int toplam;
	d1 d2;
	d1 d3;
	d2 = 20;
	d3 = 40;
	toplam = d2 + d3;
	printf("%d", toplam);



	return 0;
}