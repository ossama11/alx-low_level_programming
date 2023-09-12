#include <stdio.h>
#include "main.h"

int main()
{
    char name[] = "_putchar";
    int i;

    for (i = 0; name[i] != '\0'; i++) {
        _putchar(name[i]);
    }
	
    _putchar('\n');
    return 0;
}
