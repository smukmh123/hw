#include <stdio.h>
#include <math.h>

double calculate(double arr[], int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

double calculate2(double arr[], int n) {
    double mean = calculate(arr, n);
    double sum_squared_diff = 0;
    
    for(int i = 0; i < n; i++) {
        sum_squared_diff += pow(arr[i] - mean, 2);
    }
    
    return sqrt(sum_squared_diff / n);
}

int main() {
    int n = 5;
    double numbers[5];
    
    printf("5개의 실수를 입력하세요: ");
    for(int i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    double std_dev = calculate2(numbers, n);
    printf("표준편차 = %.3f\n", std_dev);
    
    return 0;
}