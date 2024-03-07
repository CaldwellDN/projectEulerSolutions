#include <stdio.h>

int main() {
    int goal = 1000;
    int sum = 0;
    for(int i = 0; i < goal; i++) {
        if (i%3 == 0 || i%5 == 0) {
            sum = sum + i;
        }
    }
    printf("%s%d\n", "Sum: ", sum);
    return 0;
}