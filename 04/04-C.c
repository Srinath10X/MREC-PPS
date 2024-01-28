#include <stdio.h>

int main() {
  int n, s, r, i;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  s = 0;
  r = n / 2;
  for (i = 1; i <= r; i++) {
    if (n % i == 0) {
      s += i;
    }
  }
  if(s == n) {
    printf("%d is a perfect number.\n", n);
  }else {
    printf("%d is not a perfect number.\n", n);
  }
  return 0;
}
