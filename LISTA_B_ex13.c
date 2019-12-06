#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int base;
	int altura;
	int pe;
	int area;
	
	
	printf("Digite a altura do triangulo:");
	scanf("%d", &altura);
	
	printf("Digite a base do triangulo:");
	scanf("%d", &base);
	
	pe=base+altura;
	area=base*altura;
	
	printf("A area do triangulo e %d e o perimetro e %d!!!\n", area, pe);
	
	system("pause");
	return 0;
	
}
