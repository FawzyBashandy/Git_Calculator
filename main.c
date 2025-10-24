#include <stdio.h>
#include "add.h"
#include "mod_feature.h"

int main()
{
    printf("%d", add(3,4));
    printf("modulus values is: %d", modulus_func(5,3));

    return 0;
}