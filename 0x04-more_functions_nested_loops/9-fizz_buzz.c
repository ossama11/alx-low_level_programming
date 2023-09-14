#include <stdio.h>

/*
 * main - hello
 *
 *
 */
int main(void)
{
    int i;
    for (i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("Fizz ");
            if (i % 5 == 0)
            {
                printf("Buzz ");
            }
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    return (0);
}

