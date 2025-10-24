#include <stdio.h>
#include "mul.h"
#include "add.h"
#include "subtract/subtract.h"
#include "dev.h"
int main()
{
    printf("%d",mul(5,11));

    printf("%d",add(3,4));

    printf("%d",subtract(8,5));
    printf("%d",dev(8,5));
}