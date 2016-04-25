#include <stdio.h>

int main()
{
	int n_func, h_func;
	float s_func;
	
	scanf("%d %d %f", &n_func, &h_func, &s_func);

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", n_func, (float) h_func * s_func);
	return 0;
}
