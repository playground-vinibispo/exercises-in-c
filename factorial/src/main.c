#include <stdint.h>
#include <stdio.h>
int64_t factorial(int64_t num) {
  if (num <= 1) {
    return 1;
  } 
  int64_t multiplier = 1;
  for (int64_t i = 1; i <= num; i++) {
    multiplier *= i;
  }
  return multiplier;
}

int main() {
  int64_t number;
  printf("Type a number to find its factorial (The number maximum is 20): ");
  scanf("%lld", &number);
  printf("The factorial of %lld is %lld\n", number, factorial(number));
  return 0;
}
