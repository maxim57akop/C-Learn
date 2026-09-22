#include <stdio.h>

int main(void) {
    int age;
    float height;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);

    return 0;
}