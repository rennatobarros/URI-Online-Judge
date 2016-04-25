#include <stdio.h>

int main()
{
	double raio, pi = 3.14159;

	scanf("%lf", &raio);//long float

	printf("A=%.4lf\n", pi * raio * raio);

	return 0;
}

