#include <stdio.h>

int main(){
    float c;
    printf("Fahrenheit\tCelsius\n");
    for(int f = 50; f <= 150; f++){
        c = 5.0 * (f - 32) / 9;
        printf("%d\t\t%.2f\n", f, c);
    }
    return 0;
}