#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	int resto;
	
	printf("Digite um numero pra verificar se � impar ou par: ");
	scanf("%d", &num);
	getchar();
	
	resto = (num % 2);
	
	if (resto == 0) {
		printf("O numero %d � par!!", num);		
	} else {
		printf("O numero %d � impar!!", num);
	}
	
	return 0;
}
