#include <stdio.h>

int main()
{
	int cod_p1, num_p1, cod_p2, num_p2;
	float val_p1, val_p2;
	
	scanf("%d %d %f", &cod_p1, &num_p1, &val_p1);
	scanf("%d %d %f", &cod_p2, &num_p2, &val_p2);

	printf("VALOR A PAGAR: R$ %.2f\n", (float) num_p1 * val_p1 + (float) num_p2 * val_p2);
	return 0;
}
