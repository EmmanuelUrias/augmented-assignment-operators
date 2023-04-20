#include <stdio.h>

int main()
{

    /*
        Augmented Assignment Operators = used to replace a statement where an operator
        takes a variable as one of its arguments and then assigns the result back to
        the same variable
        x = x + 1
        x += 1
    */

    int x = 10;

    x = x + 2;
    x += 2;

    x = x - 2;
    x -= 2;

    x = x * 4;
    x *= 4;

    x = x / 4;
    x /= 4;

    x = x % 2; // the remainder of 10 / 2 is 0 so x = 0
    x %= 2;

    printf("%d", x);

    return 0;
}