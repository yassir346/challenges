#include <stdio.h>
#include <stdlib.h>
int main() {
    int nbr;
    int i;
    
    printf("enter a number\n");
    scanf("%d", &nbr);
    
    for (i = 10; 1 <= i <= 10 ; i--){
        printf("%d * %d = %d\n", nbr, i, nbr*i);
    }
    

    return 0;
}