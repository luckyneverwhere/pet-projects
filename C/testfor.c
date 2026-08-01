#include <stdio.h>

int main() {

    char a;
    int b;

    for (b = 1; b <= 5; b++) {
        a=1;
        for (a; a <= b; a++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}