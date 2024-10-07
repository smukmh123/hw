#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);
    bool isPrime = 1;
    if (num <= 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i <= (int)sqrt(num); ++i) 
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }

    printf("Please enter a number: %s\n", isPrime ? "It is a prime number." : "It is not a prime number.");
    return 0;
}
