#include <stdio.h>

int main() {
    float kilometers, miles;
    const float conversion_factor = 1.609;

    printf("Please enter kilometers: ");
    scanf("%f", &kilometers);

    miles = kilometers / conversion_factor;
    printf("%.1f km is equal to %.1f miles.\n", kilometers, miles);

    return 0;
}
