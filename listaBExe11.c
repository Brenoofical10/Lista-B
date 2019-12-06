#include <stdlib.h>	
#include <stdio.h>
#include <math.h>

int main(void)

{
	float a,c;
	printf("Digite o numero: \n");
	scanf("%f" , &a);
	c=pow(a,2);
	printf("O quadrado do numero e: %f \n", c);
		
	system("pause");
	return 0;	
}
