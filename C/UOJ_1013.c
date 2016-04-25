#include <stdio.h>
//#include <math.h> --> Windows
#include <stdlib.h> // -- Linux

int main()
{
	int a, b, c, ab, abc;
	scanf("%d %d %d", &a, &b, &c);

	//Maior entre A e B
	ab = (a + b + abs(a-b))/2;
	//Maior entre AB e C	
	abc = (ab + c + abs(ab - c))/2;

	printf("%d eh o maior\n", abc);

	return 0;
}
