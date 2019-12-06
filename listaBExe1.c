#include <stdlib.h>	
#include <stdio.h>
#include <math.h>

int main(void)

{
	float x1,x2,y1,y2,d;
	printf("Digite o valor de x1: \n");
	scanf("%f" , &x1);
	
	printf("Digite o valor de x2: \n");
	scanf("%f" , &x2);

    printf("Digite o valor de y1: \n");
	scanf("%f" , &y1);

	printf("Digite o valor de y2: \n");
	scanf("%f" , &y2);
	
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("A distancia entre os ponto e: %f \n", d);

	system("pause");
	return 0;	
  }


