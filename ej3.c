#include <stdio.h>

int suma_digitos(int n1);

int main(void){
    int n = 10;

    printf("%d", suma_digitos(n));

    return 0;
}

int suma_digitos(int n1){
    return ((n1%10) + digitos(n1 / 10)); //caso recursivo
}