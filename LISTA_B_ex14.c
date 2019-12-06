#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float produto;
	float porcen;
	
	printf("Digite o valor do produto:");
	scanf("%f", &produto);
	
	printf("Digite o numero do desconto:");
	scanf("%f", &porcen);
	
	porcen=porcen/100;
	produto=produto-(produto*porcen);
	
	printf("O valor do produto com desconto e: %f\n", produto);
	
	system("pause");
	return 0;
}
