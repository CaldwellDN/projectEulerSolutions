#include <stdio.h>

int sumOfSquares(int num) {
    int answer = 0;
    for(int i = 1; i <= num; i++) {
        answer += i*i;
    }
    return answer;
}

int squareOfSums(int num) {
    int answer = 0;
    for(int i = 1; i <= num; i++) {
        answer += i;
    }
    return answer*answer;
}
int main() {
    int num = 100;
    printf("%s%d\n", "Difference: ", squareOfSums(num)-sumOfSquares(num));
    return 0;
}