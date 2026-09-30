#include<stdio.h>

int sum_of_prime_numbers(int start, int end) {
    int sum = 0;
    for (int num = start; num <= end; num++) {
        int is_prime = 1;
        if (num < 2) {
            is_prime = 0;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime) {
            sum += num;
        }
    }
    return sum;
}
int main() {
    int start, end;
    scanf("%d %d", &start, &end);
    printf("Result = %d\n", sum_of_prime_numbers(start, end));
    return 0;
}