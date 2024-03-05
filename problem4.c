#include <stdio.h>

int reverseNum (int num) {
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}
int main() {
    int palindrome = 0;
    for(int i = 0; i <= 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            int answer = i * j;
            if (answer == reverseNum(answer) && answer > palindrome) {
                palindrome = answer;
            }
        }
    }
    printf("%s%d\n", "Largest Palindrome: ", palindrome);
}

