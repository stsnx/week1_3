#include<stdio.h>
#define Pi 3.141592653589793238462643383279502884797
int main()
{
	double a;
	scanf_s("%Lf",&a);
	printf("%.6lf\n", a * a * Pi);
	printf("%.6lf", a * a * 2);
	return 0;
}

