// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float degreek;
    float degreec;
    printf("saisir la temperature en celsius");
    scanf("%f", &degreec);
    degreek = degreec + 273.15;
    printf("the degree is %f", degreek);

    return 0;
}