#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	int x, y;
	int sonuc;

	printf("Taban: ");
	scanf("%d", &x);

	printf("�s: ");
	scanf("%d", &y);

	sonuc = pow(x, y);
	printf("Sonu�: %d",sonuc);


	return 0;
}