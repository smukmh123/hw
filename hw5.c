#include <stdio.h>

int solve(int num)
{
    if (num > 0)
    {
        solve(num / 2);
        printf("%d", num % 2);
    }
}

int main(void)
{
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    solve(num);
    printf("\n");

    return 0;
}
