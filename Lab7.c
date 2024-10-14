#include <math.h>
#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//1
	char cha;
	printf("Введите букву или цифру: ");
	scanf("%c", &cha);
	switch (cha)
	{
	case '0':
		printf("Это цифра\n");
		break;
	case '1':
		printf("Это цифра\n");
		break;
	case '2':
		printf("Это цифра\n");
		break;
	case '3':
		printf("Это цифра\n");
		break;
	case '4':
		printf("Это цифра\n");
		break;
	case '5':
		printf("Это цифра\n");
		break;
	case '6':
		printf("Это цифра\n");
		break;
	case '7':
		printf("Это цифра\n");
		break;
	case '8':
		printf("Это цифра\n");
		break;
	case '9':
		printf("Это цифра\n");
		break;
	default:
		printf("Это буква\n");
	}
	//2
	float x;
	char c;
	float y;
	puts("Введите число, требуемую операцию, и второе число");
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
	puts("\nВведите k");
	scanf("%i", &k);
	switch (k == 1 ? 1 : k > 1 && k < 5 ? 2 : k>4 && k<21 || k==0?3:4) {
	case 1:
		printf("В программе %i ошибка", k);
		break;
	case 2:
		printf("В программе %i ошибки", k);
		break;
	case 3:
		printf("В программе %i ошибок", k);
		break;
	case 4:
		printf("недопустимое количество ошибок");
		break;
	}
}