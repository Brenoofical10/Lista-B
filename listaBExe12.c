#include <stdlib.h>	
#include <stdio.h>
#include <math.h>

int main(void)

{
	float a,c,saldo;
	printf("Digite o saldo da sua poupanca: \n");
	scanf("%f" , &a);
	c=(a*2/100);
	saldo=(a+c);
	printf("O saldo da poupanca com reajuste e: %f \n", saldo);
		
	system("pause");
	return 0;	
}
