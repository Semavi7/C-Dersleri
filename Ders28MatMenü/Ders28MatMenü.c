#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Turkish");
	
	printf("********************\n");
	printf("**      MEN�      **\n");
	printf("********************\n\n");

	printf("1.Toplama\n");
	printf("2.��karma\n");
	printf("3.Kare Alma\n");
	printf("4.K�p Alma\n");
	printf("5.Denklem(5x^2+4x+3)\n\n");
	printf("��k�� Yapmak ��in 0'� Tu�lay�n\n\n");

	int s1, s2, islem, toplam;
	yeniden:
		printf("��lem No Giriniz: ");
		scanf("%d", &islem);
		printf("\n");

		switch (islem)
		{
		case 1: 
			printf("Say� Biri Giriniz: ");
			scanf("%d", &s1);
			printf("Say� �kiyi Giriniz: ");
			scanf("%d", &s2);
			toplam = s1 + s2;
			printf("Toplam: %d\n\n", toplam);
			goto yeniden;
			break;
		case 2:
			printf("Say� Biri Giriniz: ");
			scanf("%d", &s1);
			printf("Say� �kiyi Giriniz: ");
			scanf("%d", &s2);
			toplam = s1 - s2;
			printf("��karma Sonucu: %d\n\n", toplam);
			goto yeniden;
			break;
		case 3:
			printf("Karesi Al�nacak Say�y� Girinzi: ");
			scanf("%d", &s1);
			toplam = s1 * s1;
			printf("%d Say�s�n�n Karesi: %d\n\n", s1, toplam);
			goto yeniden;
			break;
		case 4:
			printf("K�p� Al�nacak Say�y� Giriniz: ");
			scanf("%d", &s1);
			toplam = s1 * s1 * s1;
			printf("%d Say�s�n�n K�p�: %d\n\n", s1, toplam);
			goto yeniden;
			break;
		case 5:
			printf("x De�erini Giriniz: ");
			scanf("%d", &s1);
			toplam = 5 * s1 * s1 + 4 * s1 + 3;
			printf("Denklemin Sonucu: %d\n\n", toplam);
			goto yeniden;
			break;
		default:
			printf("��k��");break;
		}
	





	return 0;
}