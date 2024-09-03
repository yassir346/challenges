#include <stdio.h>
#include <stdlib.h>
int main() {
   int n;
   int i;
  
   printf("entrez le nombre d'elements\n");
   scanf("%d", &n);
   
  int tableau[n];
  
  printf("entrez les %d elements\n", n);
  i = 0;
  while (i < n)
  {
      printf("tableau(%d)", i + 1);
      scanf("%d", &tableau[i]);
      i++;
  }
  printf ("les elements de tableau \n ");
  i = 0;
  while (i < n)
  {
      printf("%d \n", tableau[i]);
      i++;
  }
  
return 0;
