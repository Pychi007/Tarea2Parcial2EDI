//
// Created by picha on 21/03/2022.
//
#include <stdio.h>


int main() {
    int arreglo[100];
    int tam;
    int x;
    int indice;
    printf("Ingrese el tamanio del arreglo:\n");
    scanf("%i", &tam);
    for (int i = 0; i < tam; i++) {
        printf("Ingrese el valor en [%i]:\n", i);
        scanf("%i", &arreglo[i]);
    }
    for (int i = 0; i < tam; i++) {
        printf("El valor en la posicion [%i] es %i\n", i, arreglo[i]);
    }
    printf("Ingrese el valor a buscar:");
    scanf("%i",&x);

    for (int i=0; i<tam; i++){
        if(arreglo[i]==x){
            indice=i;
        }
    }
    for (int i=0; i<tam; i++){
        if(arreglo[tam-1]<=x) {
            if (arreglo[i] <= x) {
                if (arreglo[i] == x) {
                    indice = i;
                }
                else {
                    indice = i + 1;
                }
            }
        }
    }
    if(arreglo[tam-1]>x) {
        for (int i = 0; i < tam; i++) {
            if (arreglo[i] < x) {
                indice = i + 1;
            }
        }
    }
    printf("Salida %i", indice);
}