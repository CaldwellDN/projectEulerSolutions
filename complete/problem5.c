#include <stdio.h>

int main() {
    int answerFound = 0;
    int num = 20;
    while(answerFound == 0) {
        for (int i = 1; i <= 20; i++) {
            if (num % i != 0) {
                answerFound = 0;
                num += 20;
                break;
            }
            else {
                answerFound = 1;
            }
        }
    }
    printf("%s%d\n", "Answer: ", num);
    return 0;
}

