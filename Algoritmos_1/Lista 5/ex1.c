#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    srand(time(NULL));

    int x = rand()%100+1 ;
    printf("o numero sorteado é %d", x);



    return: 0 ; 
}