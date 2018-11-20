#include<stdio.h>
#include<locale.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	//1
	//printf("a)5 10\t\t\tб)100t\t\t\tв) x 25\n");
	//printf("  7 см\t\t\t\t1049y\t\t\tx y\n\n");


	//2
	//int y, x = 1;
	//y = 7 * pow(x, 2) - 3 * x + 6;
	//printf("y=%d\n\n",y);

	//3a
	//int y, a = 1;
	//y = 12 * pow(x, 2) - 7 * x + 16;
	//printf("y=%d\n\n",y);

	//b
	//int P, a = 4;
	//P = a*4;
	//printf("P=%d\n\n", P);


	//4
	//int D, r = 4;
	//D = 2*r;
	//printf("y=%d\n\n", D);

	//7
	//float x=1, y=1, z;
	//z = pow(x, 3) - 2.5*x*y + 1.78*pow(x, 2) - 2.5*y + 1;
	//printf("z=%f\n\n",z);

	//8
	//int P, V=10, m=100;
	//P = m / V;
	//printf("P=%d\n\n", P);

	//9
	//int M=500, P=1000, R;
	//R = P / M;
	//printf("Плотность населения %d на кв/км\n\n", R);

	//10

	/*int x, y, AverAge, difx, dify;

	printf("\nВозраст Тани : ");
	scanf_s("%d", &x);
	printf("Возраст Мити : ");
	scanf_s("%d", &y);

	AverAge = (x + y) / 2;

	printf("\nСредний возраст детей : %d\n", AverAge);

	difx = x - AverAge;
	dify = y - AverAge;

	printf("\nОтличается от среднего - возраст Тани %d, возраст Мити %d\n\n", difx, dify);*/

	//11

	/*int a=5, b=6, c;

	c = a + b;
	a = c - a;
	b = c - b;

	printf("\nзначение переменной a=%d, значение переменной b=%d\n\n", a, b);*/


	//12

	int a = 5, b = 10, c = 15, ac, bc, cc, sum;

	sum = a + b + c;
	//b=c
	b = c;
	//a=b
	a = sum - b - c;
	//c=a

	printf("\n b=>c %d, a=>b %d, c=>a %d\n\n", b, a, c);


	system("pause"); 111
}