#include <stdio.h>

int main()
{
	int reais, a, b, c, d, e, f, g;
	scanf("%d", &reais);
	
	printf("%d\n", reais);
        a = reais/100;
        reais %= 100;
   
        b = reais/50;
        reais %= 50;

        c = reais/20;
        reais %= 20;

        d = reais/10;
        reais %= 10;

        e = reais/5;
        reais %= 5;

        f = reais/2;
        reais %= 2;

        g = reais;

	printf("%d nota(s) de R$ 100,00\n",a);
        printf("%d nota(s) de R$ 50,00\n",b);
        printf("%d nota(s) de R$ 20,00\n",c);
        printf("%d nota(s) de R$ 10,00\n",d);
        printf("%d nota(s) de R$ 5,00\n",e);
        printf("%d nota(s) de R$ 2,00\n",f);
        printf("%d nota(s) de R$ 1,00\n",g);
	return 0;
}
