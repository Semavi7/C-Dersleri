#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int toplam(int s1, int s2) {
	int s3;
	s3 = (s1 + s2) * 5 - 10;
	return s3;
}

int main() {
	setlocale(LC_ALL, "Turkish");

	int t;
	t = toplam(4, 5);
	printf("%d\n", t);

	t = toplam(2, 3);
	printf("%d", t);


	return 0;
}