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

    printf("is_prime?: %s\n", isPrime ? "true" : "false");
    return 0;
}