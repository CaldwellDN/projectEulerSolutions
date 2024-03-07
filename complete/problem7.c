#include <stdio.h>

int main() {
    int counter = 1;
    int goal = 10001;
    int num = 1;
    while (counter <= goal) {
        num++;
        int isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            counter++;
        }
    }
    printf("%s%d\n", "Number: ", num);
    return 0;
}