#include <stdlib.h>	
#include <stdio.h>
#include <string.h>

int main(void)

{
	float a,b,c;
	printf("Digite o primeiro numero: \n");
	scanf("%f" , &a);
	printf("Digite o segundo numero: \n");
	scanf("%f" , &b);
	c=a+b;
	printf("A soma e: %f \n", c);
	c=a-b;
	printf("A subtracao e: %f \n", c);
	c=a*b;
	printf("A multiplicacao e: %f \n", c);
	c=a/b;
	printf("A divisao e: %f \n", c);
	
	system("pause");
	return 0;	
}
