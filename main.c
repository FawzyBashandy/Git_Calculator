#include <stdio.h>
#include "mul.h"
#include "add.h"
#include "mod_feature.h"

int main()
{
    printf("%d", add(3,4));
    printf("modulus values is: %d", modulus_func(5,3));
    printf("%d", mul(5,11));
    printf("%d", add(3,4));
    return 0;
}