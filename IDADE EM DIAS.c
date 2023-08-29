#include <stdio.h>

int main () {
    
    int Idias;
    int anos;
    int mes;
    int dias;
    
    scanf("%d", &Idias);
    
    anos = Idias / 365;
    Idias %= 365;
    mes = Idias / 30;
    dias = Idias % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos,mes,dias);
    
    return 0;
    
}