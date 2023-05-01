#include <stdio.h>

void reverse() {

  int n, reverse = 0, remainder;

  printf("\nEnter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d\n", reverse);

}
