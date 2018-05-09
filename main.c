#include <stdio.h>
#include "calculator.h"

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;

    printf("<< a: ");
    scanf("%d", &a);
    fflush(0);

    printf("<< b: ");
    scanf("%d", &b);
    fflush(0);

    printf(">> %d + %d = %d\n", a, b, iAdd(a, b));
    printf(">> %d - %d = %d\n", a, b, iSub(a, b));
    printf(">> %d * %d = %d\n", a, b, iMul(a, b));
    printf(">> %d / %d = %d\n", a, b, iDiv(a, b));

    fflush(1);

    return 0;
}
