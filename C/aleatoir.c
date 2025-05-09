#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int n;

  srand(time(0));

    n = rand() % 4 - 2 ;

  if (n > 0)
    printf("%d est positif \n", n);

  else if (n < 0)
    printf ("%d est negatif\n" , n);

  else
    printf ("%d est egale a 0\n" , n);

  return 0;

}
