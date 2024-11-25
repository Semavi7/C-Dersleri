#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//%.1f yapýnca virgülden sonraki tek rakamý yazýyor.
int main() {
	setlocale(LC_ALL, "Turkish");

    int a, b, toplama1, cýkarma1;
    float n, z, toplama2, cýkarma2;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &n);
    scanf("%f", &z);

    toplama1 = a + b;
    cýkarma1 = a - b;
    toplama2 = n + z;
    cýkarma2 = n - z;

    printf("%d %d\n", toplama1, cýkarma1);
    printf("%.1f %.1f", toplama2, cýkarma2);



	return 0;
}