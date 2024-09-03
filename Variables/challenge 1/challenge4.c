#include <stdio.h>

int main() {
float KMparHEURE, METREparSECONDE;
printf ("enter the number in kilometre per hours unit : \n");
scanf ("%f", &KMparHEURE);
METREparSECONDE = KMparHEURE * 0.27778;
printf("the result in yards Metre per second is : %f", METREparSECONDE);


    return 0;
}