#include <stdio.h>
int main() {
    printf("Enter a number:");
    scanf(%d, &number);
    if (number & 1){
        printf("The lsb of %d is 1 (number is odd).\n", number);
  } else {
    ("The lsb of %d is 0 (number is even).\n", number);
  }
    return 0;
}