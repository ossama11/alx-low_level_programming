#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("%d is ", n);
        
        /* your code goes there */
        if (n > 0)
        {
            printf("positive");
        }
        else if (n < 0)
        {
            printf("negative");
        }
        else    
        {
            printf("zero");
        }
        printf("\n");
        return (0);
}

