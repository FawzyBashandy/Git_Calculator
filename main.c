#include <stdio.h>
#include "dev.h"
#include "mul.h"
#include "add.h"
#include "mod_feature.h"
#include "subtract/subtract.h"

int main()
{
    printf("%d",dev(8,5));

    printf("modulus values is: %d", modulus_func(5,3));
    printf("%d",mul(5,11));

    printf("%d",add(3,4));

    printf("%d",subtract(8,5));
    
}