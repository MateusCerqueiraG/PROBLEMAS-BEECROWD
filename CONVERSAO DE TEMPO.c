#include <stdio.h>

int main() {
    
    int VALOR;
    int horas;
    int minutos;
    int segundos;
    
    scanf("%d", &VALOR);
    
    horas = VALOR / 3600;
    VALOR %= 3600;
    minutos = VALOR / 60;
    segundos = VALOR % 60;
    
    printf("%d:%d:%d\n", horas,minutos,segundos);
    
    return 0;
    
}