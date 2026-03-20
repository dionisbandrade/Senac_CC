#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    srand(time(NULL));

    int rn1 = rand()%10+1 ;  int rn2 = rand()%10+1 ; int rn3 = rand()%10+1 ;

    printf("os números sorteados são %d, %d e %d\n", rn1, rn2, rn3);
        if(rn1 < rn2+rn3 && rn2 < rn1+rn3 && rn3 < rn1+rn2) {
            printf("a soma dos números %d, %d e %d, é um triângulo\n", rn1, rn2, rn3);
            if(rn1 == rn2 || rn1 == rn3);
                printf("é isosceles\n");
                if (rn1 == rn2 && rn1==rn3){
                    printf("é equilatero\n");
                }
                else {
                    printf("é escaleno\n");
                }
        }


    return 0 ; 
}