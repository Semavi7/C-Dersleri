#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");

	char ch;
	char s[100];
	char sen[100];
	scanf("%c", &ch);
	scanf("%s", s);
	scanf("\n");//bu önceki kelimeden enter ile gelen \n temizler
	scanf("%[^\n]%*c", sen);
	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s\n", sen);


	return 0;
}