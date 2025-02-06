#include <stdio.h>
#include <stdlib.h>


int calculator(char op, int opA, int opB) {
    switch (op) {
        case '+':
            return opA + opB;
        case '-':
            return opA - opB;
        case '*':
            return opA * opB;
        case '/':
            if (opB == 0) {
                printf("Error: division by zero\n");
                exit( EXIT_FAILURE );
            }
            return opA / opB;
        default:
            printf("Error: wrong operation type '%c'\n", op);
            exit( EXIT_FAILURE );
    }
}

int main(void) {
    printf("2 + 7 = %d\n", calculator('+', 2, 7));
    printf("2 - 7 = %d\n", calculator('-', 2, 7));
    printf("2 * 7 = %d\n", calculator('*', 2, 7));
    printf("49 / 7 = %d\n", calculator('/', 49, 7));
    /* Those two are mutually exclusive, comment one to see what happens */
    // printf("2 / 0 = %d\n", calculator('/', 2, 0));
    printf("49 $ 7 = %d\n", calculator('$', 49, 7));
    return 0;
}

