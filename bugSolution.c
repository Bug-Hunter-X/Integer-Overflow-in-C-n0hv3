#include <stdio.h>

int main() {
  long long int x = 10;
  long long int *ptr = &x;
  *ptr = 20;
  printf("%lld", x);
  return 0;
}