#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    srand(time(NULL));

    int rn1 = rand()%10+1 ;  int rn2 = rand()%10+1 ; int rn3 = rand()%10+1 ;

    printf("os números sorteados são %d, %d e %d", rn1, rn2, rn3);
    
    return: 0 ; 
}