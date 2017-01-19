#include <stdio.h>

// Using division operator to find minimum of three numbers
int smallest(int x, int y, int z)
{
    if (!(y/x))  // Same as "if (y < x)"
        return (!(y/z))? y : z;
    return (!(x/z))? x : z;
}

int main()
{
    int x = 1, y = 4, z = 0;
    printf("Minimum of 3 numbers is %d", smallest(x, y, z));
    return 0;
}
