#include <stdio.h>

int main() {
    long num = 600851475143;
    int i, largestPrimeFactor;
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }
    printf("The largest prime factor is: %d\n", largestPrimeFactor);
    return 0;
}