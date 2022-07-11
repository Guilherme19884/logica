#include <stdio.h>

int main(){

    void pares (void);

    pares();


    return 0;
}

void pares(void)
{
    int n,i,resultado = 0;


    printf("Digite o tamanho de n :\n");
    scanf("%d", &n);

    for(i=0; i < n ; i++){
        if(i % 2 == 0){
            resultado ++ ;
        }
    }

    printf("o resultado eh: %d", resultado);

}
