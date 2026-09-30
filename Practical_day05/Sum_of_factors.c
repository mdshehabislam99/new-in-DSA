#include<stdio.h>

int sum_of_factors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Result = %d\n", sum_of_factors(n));
    return 0;
}