#include <stdio.h>

int MAX = 1000000;

int chainLengths[1000000] = {0};

int determineChainLengths(long num) {
    int chain = 1;
    if (num < MAX && chainLengths[num] != 0) {
        return chainLengths[num];
    }

    if (num % 2 == 0 ) {
        chain = 1 + determineChainLengths(num / 2);
    } else if (num != 1) {
        chain = 2 + determineChainLengths((3 * num + 1) / 2);
    }

    if (num < MAX) {
        chainLengths[num] = chain;
    }
    return chain;
}

int main() {
    int longestChain = 0;
    int num;

    for(int i = 2; i < MAX; i++) {
        int length = determineChainLengths(i);
        if(length > longestChain) {
            longestChain = length;
            num = i;
        }
    }
    printf("%s%d\n", "Num w/ Longest Chain: ", num);
    return 0;
}