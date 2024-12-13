#include <stdio.h>

float sum(float a, float b) {
  return a + b;
}

float subtraction(float a, float b) {
  return a - b;
}

float multiplication(float a, float b) {
  return a * b;
}

float division(float a, float b) {
  return a / b;
}



int main() {
  printf("Type the first number: ");
  float first_number;
  scanf("%f", &first_number);
  printf("Type the second number: ");
  float second_number;
  scanf("%f", &second_number);

  printf("The sum of %.2f and %.2f is %.2f\n", first_number, second_number, sum(first_number, second_number));
  printf("The subtraction of %.2f and %.2f is %.2f\n", first_number, second_number, subtraction(first_number, second_number));
  printf("The multiplication of %.2f and %.2f is %.2f\n", first_number, second_number, multiplication(first_number, second_number));
  if (second_number != 0) {
    printf("The division of %.2f and %.2f is %.2f\n", first_number, second_number, division(first_number, second_number));
  } else {
    printf("You can't divide by zero\n");
  }
  return 0;
}

