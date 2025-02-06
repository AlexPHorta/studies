#include <stdbool.h>
#include <stdio.h>


bool odd_even(int number) {
    if (number%2 == 0)
        return true;
    return false;
}


int main(void)
{
    printf("%d: %d\n", 0, odd_even(0));
    printf("%d: %d\n", 1, odd_even(1));
    printf("%d: %d\n", 8, odd_even(8));
    printf("%d: %d\n", 13, odd_even(13));
    printf("%d: %d\n", 72, odd_even(72));
    return 0;
}
