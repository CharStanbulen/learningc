#include <stdio.h>

int A=10;
int B=20;
char buy;
int sum,number;

int main()
{
	 /*
	int num;

	printf("pls input a number : ");
	scanf("%d", &num);

	(num % 2 == 0)?printf("even"):printf("odd");
	*/

	// 三元运算的例子
	/*
	printf("The follow is product name and price: \n A commadity A 10 yuan\n B commadity B 20 yuan\n");
	printf("please input your product(A or B):");
	scanf("%c" , &buy);
	printf("pls input number:");
	scanf("%d", &number);
	sum = buy == 'A' ? A * number : B * number;
	printf("\ncommadity type: %c, number: %d, total: %dyuan.\n", buy, number, sum);
	*/

	int a;
	printf("input integer number: ");
	scanf("%d", &a);
	switch(a)
	{
		case 1:printf("Monday\n");
		break;
		case 2:printf("Tuesday\n");
		break;
		case 3:printf("Wednesday\n");
		break;
		case 4:printf("Thursday\n");
		break;
		case 5:printf("Friday\n");
		break;
		case 6:printf("Saturday\n");
		break;
		case 7:printf("Sunday\n");
		break;
		default:printf("error\n");
	}

	return 0;
}
