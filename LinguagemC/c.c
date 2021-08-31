#include <stdio.h>

int main(void)
{

    int num;

    printf("Informe um número para verificar se é par ou impar: ");
    scanf ("%i",&num);
    
    if (num % 2 == 0){
        printf ("O número %i é par!!",num);
    }else {
        printf("O número %i é impar!!",num);
    }

    printf("\nVerificador desligando...");
}

// usei um compilador online msm ashuashuashu