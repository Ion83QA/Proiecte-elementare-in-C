#include <stdio.h>

int main() {
    //Transformarea gradelor celsius in grade Kelvin
    float cel,K;
    printf("\nEnter the temperature in Celsius:");
    scanf("%f",&cel);
    K = cel-273;
    printf("\nTemperature in Kelvin: %f",K);
    return 0;
}
