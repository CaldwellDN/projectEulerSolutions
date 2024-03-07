#include <stdio.h>

int main() {
    int stop = 4000000;
    int term1 = 1;
    int term2 = 2;
    int answer = 0;
    int sumEven = 2;
    
    while (answer <= stop) {
        answer = term1 + term2;
        term1 = term2;
        term2 = answer;
        
        if (answer % 2 == 0) {
            sumEven = sumEven + answer;
        }
    }
    printf("%s%d\n", "Sum of the even-valued terms: ", sumEven);
    return 0;
}