#include <math.h>
#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//1
	char cha;
	printf("������� ����� ��� �����: ");
	scanf("%c", &cha);
	switch (cha)
	{
	case '0':
		printf("��� �����\n");
		break;
	case '1':
		printf("��� �����\n");
		break;
	case '2':
		printf("��� �����\n");
		break;
	case '3':
		printf("��� �����\n");
		break;
	case '4':
		printf("��� �����\n");
		break;
	case '5':
		printf("��� �����\n");
		break;
	case '6':
		printf("��� �����\n");
		break;
	case '7':
		printf("��� �����\n");
		break;
	case '8':
		printf("��� �����\n");
		break;
	case '9':
		printf("��� �����\n");
		break;
	default:
		printf("��� �����\n");
	}
	//2
	float x;
	char c;
	float y;
	puts("������� �����, ��������� ��������, � ������ �����");
	scanf("%f%c%f", &x, &c, &y);
	switch (c) {
	case'+':
		printf("=%f", x + y);
		break;
	case'-':
		printf("=%f", x-y);
		break;
	case'*':
		printf("=%f", x * y);
		break;
	case'/':
		printf("=%f", x / y);
		break;
	case'^':
		printf("=%f", pow(x,y));
		break;
	}
	//3
	int k;
	puts("\n������� k");
	scanf("%i", &k);
	switch (k == 1 ? 1 : k > 1 && k < 5 ? 2 : k>4 && k<21 || k==0?3:4) {
	case 1:
		printf("� ��������� %i ������", k);
		break;
	case 2:
		printf("� ��������� %i ������", k);
		break;
	case 3:
		printf("� ��������� %i ������", k);
		break;
	case 4:
		printf("������������ ���������� ������");
		break;
	}
}