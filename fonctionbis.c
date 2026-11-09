#include <stdio.h>
#include "fonctionbis.h"

int asksize()
{
    int size;
    printf("Choose star size (recommended 5 to 10):\n");
    scanf("%d", &size);
    return size;
}
