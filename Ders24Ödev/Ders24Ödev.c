#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int toplam(int s1, int s2) {
	int s3;
	s3 = s1 + s2;
	return s3;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int t, i, d;
	
	printf("Sayi1: ");
	scanf("%d", &i);

	printf("Sayi2: ");
	scanf("%d", &d);

	t = toplam(i, d);
	printf("Toplam: %d", t);


	return 0;
}