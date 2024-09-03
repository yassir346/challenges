#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val_1, val_2, S;
    printf("entrez le premier nombre et le deuxieme nombre");
    scanf("%d%d", &val_1, &val_2);
    if (val_1 == val_2){
        S = val_1 + val_2;
        S = S * 3;
        printf ("%d", S);
    }
    else
        S = val_1 + val_2;
        printf ("%d", S);

    return 0;
}
