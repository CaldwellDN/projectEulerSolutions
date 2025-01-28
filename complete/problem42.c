#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Triangle Number Formula: 1/2 n(n+1);
*/

int triangleNumber(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return n + triangleNumber(n-1);
}

int main() {
  FILE* fptr;
  int totalTriangleWords = 0;

  fptr = fopen("words.txt", "r");

  if (fptr == NULL) {
    printf("No File");
    exit(1);
  }

  char buf[100];
  while (fscanf(fptr, "\"%99[^\"]\",", buf) == 1) {
    char* word = buf;
    int num = 0;
    for(int i = 0; i < strlen(word); i++) {
      num += word[i]-64;
    }

    for(int i = 0; num >= triangleNumber(i); i++) {
      if (triangleNumber(i) == num)
        totalTriangleWords++;
    }
  }

  printf("Triangle Number Words: %d\n", totalTriangleWords);
  fclose(fptr);
  return 0;
}
