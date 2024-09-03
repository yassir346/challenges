#include <stdio.h>

int main() {
float temperature;
printf("saisissez la temperature : \n");
scanf("%f", &temperature);
if (temperature < 0){
    printf("l'etat de matiere solid");
}
else if (0 < temperature < 100){
    printf("l'etat de matiere est liquide");
}
else {
    printf("l'etat de la matiere est gazeuse");
}


    return 0;
}