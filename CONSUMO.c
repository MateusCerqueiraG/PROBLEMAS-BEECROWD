#include <stdio.h>

int main () {
    
    int X;
    float Y;
    float media;
    
    scanf("%d", &X);
    scanf("%f", &Y);
    
    media = X / Y;
    
    printf("%.3f km/l\n", media);
    
    return 0;
}