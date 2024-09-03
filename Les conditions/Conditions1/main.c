#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("entrez la lettre\n");
    scanf("%c",&a);
    switch(a){
    case'a':
    case'e':
    case'i':
    case'u':
    case'o':
    case'y':
        printf("le caractere %c est une voyelle \n",a);
        break;
    default:
        printf("la lettre %c n'est pas voyelle");
        break;
    }
    return 0;
}
