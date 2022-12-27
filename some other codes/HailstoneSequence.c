#include <stdio.h>

class Hail()
{ 
    unsigned int n;
    printf("Pl. enter no :");
    scanf("%d", &n);
    while ( n > 0 ) 
    {
        printf( "%d ", n);
        if ( n == 1)   
            break;
        if (!(n & 1))  
            n/= 2;
        else 
            n = 3 * n + 1;
    }
    printf("Done \n");
}
