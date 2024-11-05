#include <stdio.h>

int main() {
    int arr[5];
    int odd[5], even[5];
    int odd_count = 0, even_count = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}
