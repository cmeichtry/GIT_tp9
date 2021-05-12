#include <stdio.h>

int suma_digitos(int n1);

int main(void){
    int n = 10;

    printf("%d", suma_digitos(n));

    return 0;
}

int suma_digitos(int n1){

    if(0 <= n1 && n1 <= 9){
        return n1;
    }

    else{
        return ((n1 % 10) + suma_digitos(n1 / 10));
    }
}