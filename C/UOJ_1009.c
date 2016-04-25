#include <stdio.h>

int main()
{
	char n_vend[15];
	double s_fixo, t_vend;
	
	gets(n_vend);
	scanf("%lf %lf", &s_fixo, &t_vend);

	printf("TOTAL = R$ %.2lf\n", s_fixo + t_vend * 0.15);
	return 0;
}
