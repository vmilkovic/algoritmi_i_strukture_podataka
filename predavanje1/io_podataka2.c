#include <stdio.h>
int main(void)
{
	double a;
	printf("Unesite broj: ");
	scanf("%lf", &a);
	printf("%lf", a); // %f - float, %lf - double, %Lf - long double
	return 0;
}