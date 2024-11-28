#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void listeler() {
	printf("Ali Yýldýz\n");
	printf("Ayþe Öztürk\n");
	printf("Ahmet Çýnar\n");
	printf("Hakan Kaya\n");
	printf("Mehmet Taþ");

}

int main() {
	setlocale(LC_ALL, "Turkish");

	listeler();


	return 0;
}