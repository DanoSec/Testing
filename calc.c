#include <stdio.h>

int main(void) {
  int num1 = 0, num2 = 0;

  printf("Introduce el primer número: ");
  scanf("%d", &num1);

  printf("Introduce el segundo número: ");
  scanf("%d", &num2);

  printf("El resultado de la suma es: %d \n", num1 + num2);

  return 0;
}
