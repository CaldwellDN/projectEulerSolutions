#include <stdio.h>

int isOdd(int num) {
  return (num % 1); // NOTE: This was a bitwise operation originally, but a modulus proved to be 2x faster??
                    // Tested on Macbook Pro, M4 Pro, 24GB Ram, Sequoia 15.1
}


int main() {
    int maxChain = -1;
    long long maxChainNumber = 0;
    for(int i = 1; i <= 1000000; i++) {
        long long num = i;
        int chainSize = 0;
        while(num > 1) {
            if (isOdd(num) == 1) {
                num = 3*num+1;
            } else {
                num /= 2;
            }
            chainSize++;
        }
        if (chainSize > maxChain) {
            maxChain = chainSize;
            maxChainNumber = i;
        }
    }

    printf("Max Chain: %d using number %lld\n", maxChain, maxChainNumber);
}
