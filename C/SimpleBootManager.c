#include<stdio.h>

int main() {
    printf("Boot Manager\n\n");

    int number;
    printf("Enter command(1-4): ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("Loading OS");
            break;
        case 2:
            printf("Entering safe Mod");
            break;
        case 3:
            printf("max@depthos:~$ _");
            break;
        case 4:
            printf("System halted. Power off");
            break;
        default:
            printf("Error: Invalid boot command! System freeze.");
            break;
    }
    return 0;
}