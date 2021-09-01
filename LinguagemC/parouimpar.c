#include<stdio.h>
#include<stdlib.h>

int main(){
	int num;
	int resto;
	
	printf("Digite um numero pra verificar se é impar ou par: ");
	scanf("%d", &num);
	getchar();
	
	resto = (num % 2);
	
	if (resto == 0) {
		printf("O numero %d é par!!", num);		
	} else {
		printf("O numero %d é impar!!", num);
	}
	
	return 0;
}
