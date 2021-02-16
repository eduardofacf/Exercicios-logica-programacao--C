#include <stdio.h>
#include <string.h>


int main(){

    int n, contMenor;
    double somaAltura, alturaMedia, menorDezesseis;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int vetIdade[n];
    char vetNome[n][50];
    double vetAltura[n];

    somaAltura = 0;

    for(int i = 0; i < n; i++){
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", vetNome[i]);
        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
        printf("Altura: ");
        scanf("%lf", &vetAltura[i]);
        somaAltura = somaAltura + vetAltura[i];
    }

    alturaMedia = somaAltura / n;
    printf("\nAltura media: %.2lf\n", alturaMedia);

    contMenor = 0;
    for(int i = 0; i < n; i++){
        if(vetIdade[i] < 16){
            contMenor = contMenor + 1;
        }
    }

    menorDezesseis = (double)contMenor * 100 / n;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", menorDezesseis);

    for(int i = 0; i < n; i++){
        if(vetIdade[i] < 16){
            printf("%s\n", vetNome[i]);
        }
    }
    return 0;
}
