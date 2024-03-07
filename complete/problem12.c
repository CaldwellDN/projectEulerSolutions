#include <stdio.h>
#include <math.h>

int numOfFactors(int number) {
    int count = 0;
    for (int i = 1; i <= sqrt(number); i++) {
        if (number % i == 0) {
            count += (i == number/i) ? 1 : 2;
        }
    }
    return count;
}


int main() {
    int num = 1, add = 2;
    while (numOfFactors(num) < 500 ) {
        num = num + add;
        add++;
    }
    printf("%s%d\n", "Answer: ", num);
    return 0;
}