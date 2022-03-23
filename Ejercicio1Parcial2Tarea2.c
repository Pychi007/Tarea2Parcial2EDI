//
// Created by picha on 20/03/2022.
//
#include <stdio.h>
#include <string.h>

int solicitarnombres(char nombres[4][50]);
int buscarnombre(char nombres[4][50]);

int main(){
    char arregloBi[4][50];
    int resultado;

    solicitarnombres(arregloBi);
    resultado = buscarnombre(arregloBi);
    printf("%d", resultado);

    return 0;
}
int solicitarnombres(char nombres[4][50]){
    for (int i=0; i<4; i++)
    {
        printf("Nombre[%d]: ", i);
        scanf("%s", &nombres[i][50]);
    }
}
int buscarnombre(char nombres[4][50]){
    char arreglouni[50];
    int x;
    int tam;
    x=-1;

    printf("Nombre a buscar:");
    scanf(" %s", arreglouni);
    tam = strlen(arreglouni);

    for (int i=0; i<=4 && x==-1; i++) {
        for (int j=0; j<tam; j++) {
            if (nombres[i][j] == arreglouni[j]){
                x=i-1;
            }else {
                x=-1;
                j=tam;
            }
        }
    }
    return x;
}