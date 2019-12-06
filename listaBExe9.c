#include <stdlib.h>	
#include <stdio.h>

int main(void)
{
	float a,b,c,m ;
	printf("Digite o primeiro numero: \n");
	scanf("%f" , &a);
	printf("Digite o segundo numero: \n");
	scanf("%f" , &b);
	printf("Digite o terceiro numero: \n");
	scanf("%f" , &c);
	m=(a+b+c)/3;
	printf("A media e: %f \n", m);
	
	system("pause");
	return 0;	
}
