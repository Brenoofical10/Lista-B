#include <stdlib.h>	
#include <stdio.h>
#include <string.h>	

int main(void)
{
	int n;
	printf("Digite o numero: \n");
	scanf("%d" , &n);

	if(n%2==0){
	printf("O numero e par \n", n);
}
	else
	printf("O numero %d e impar \n", n);{
}

	if(n<=0){
	printf("O numero e negativo \n", n);
}
	else
	printf("O numero e positivo \n", n);{
}
	system("pause");
	return 0;
	
}
