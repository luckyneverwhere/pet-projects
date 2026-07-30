#include<stdio.h>

int main() {
    printf("Octopus mood manager v0.1\n\n");
    int fatigue;
    int hunger;

    printf("Enter the fatigue(0-10): ");
    scanf("%d",&fatigue);
    printf("Enter the hunger(0-10): ");
    scanf("%d",&hunger);

    if(fatigue >= 8 && hunger >= 8) {
        printf("The octopus is unhappy");
    }
    else if(fatigue <= 3 && hunger <= 3) {
        printf("The octopus is happy and juggles pebbles.");
    }

    else if(hunger >= 5) {
        printf("The octopus wants to eat");
    }

    else if(fatigue >= 5) {
        printf("The octopus wants to sleep");
    }

    else {
        printf("The octopus is calm");
    }

    return 0;
}