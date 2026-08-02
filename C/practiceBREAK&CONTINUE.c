#include <stdio.h>

int main() {
    for (int block = 1; block <= 20; block++) {

        if (block == 4) {
            continue;
        }

        if (block == 13) {
            printf("CRITICAL ERROR: Kernel Panic!");
            break;
        }
        printf("Block number %d... OK\n", block);
    }
}