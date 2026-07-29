#include <stdio.h>
struct Octopus {
    int number;
    char name [20];
    char color [30];
    int softness;
    float weight;
    float age;
    int year;
};

int main() {
    struct Octopus Manjiro = {1, "Manjiro", "grey and black", 8, 0.2, 3, 2023};
    struct Octopus Badji = {2, "Badji", "red and black", 9, 0.1, 0.1, 2026};

    printf("=== Plushie Database ===\n");
    printf("Number: %d\n", Manjiro.number);
    printf("Name: %s\n", Manjiro.name);
    printf("Color: %s\n", Manjiro.color);
    printf("Softness: %d/10\n", Manjiro.softness);
    printf("Weight: %f kg\n", Manjiro.weight);
    printf("Age: %f years\n", Manjiro.age);
    printf("Year: %d\n", Manjiro.year);

    printf("\n");

    printf("Number: %d\n", Badji.number);
    printf("Name: %s\n", Badji.name);
    printf("Color: %s\n", Badji.color);
    printf("Softness: %d\n", Badji.softness);
    printf("Weight: %f\n", Badji.weight);
    printf("Age: %f\n", Badji.age);
    printf("Year: %d\n", Badji.year);
}
