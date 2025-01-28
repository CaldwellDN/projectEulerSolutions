#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define POW_SIZE 5
#define BOUND 1000000

int main() {
  for(int i = 1; i <= BOUND; i++) {
    int num = i; // The number we are working with during the iteration

    int bufferSize = snprintf(NULL, 0, "%d", num) + 1; // Get num len + 1 for null terminator

    int* numArr = (int*)malloc(bufferSize * sizeof(int));

  }
  return 0;
}
