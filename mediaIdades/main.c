#include <stdio.h>
#include <string.h>

int main(){

    int idade, soma, n;
    double media;

    soma = 0;
    n = 0;
    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0){
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else{
        while(idade >= 0){
            soma = soma + idade;
            n = n + 1;
            scanf("%d", &idade);
        }
        media = (double) soma / n;
        printf("MEDIA = %.2lf", media);
    }
    return 0;
}
