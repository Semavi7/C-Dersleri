#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//%.1f yap�nca virg�lden sonraki tek rakam� yaz�yor.
int main() {
	setlocale(LC_ALL, "Turkish");

    int a, b, toplama1, c�karma1;
    float n, z, toplama2, c�karma2;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &n);
    scanf("%f", &z);

    toplama1 = a + b;
    c�karma1 = a - b;
    toplama2 = n + z;
    c�karma2 = n - z;

    printf("%d %d\n", toplama1, c�karma1);
    printf("%.1f %.1f", toplama2, c�karma2);



	return 0;
}