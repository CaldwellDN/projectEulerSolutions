#include <stdio.h>
#include <math.h>

int main() {
    long long sum = 0;
    int num = 1;
    int goal = 2000000;
    while (num < goal) {
        num++;
        int isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            sum += num;
        }
    }

    printf("%s%lld\n", "Sum: ", sum);
    return 0;
}