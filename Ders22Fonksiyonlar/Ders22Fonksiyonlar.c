#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void listeler() {
	printf("Ali Y�ld�z\n");
	printf("Ay�e �zt�rk\n");
	printf("Ahmet ��nar\n");
	printf("Hakan Kaya\n");
	printf("Mehmet Ta�");

}

int main() {
	setlocale(LC_ALL, "Turkish");

	listeler();


	return 0;
}