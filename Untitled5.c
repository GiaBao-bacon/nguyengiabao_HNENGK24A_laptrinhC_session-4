#include <stdio.h>

int main() {
  int num1, num2, num3;

  printf("Nhap vao so nguyen thu nhat: ");
  scanf("%d", &num1);

  printf("Nhap vao so nguyen thu hai: ");
  scanf("%d", &num2);

  printf("Nhap vao so nguyen thu ba: ");
  scanf("%d", &num3);

  if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
    printf("%d nam trong khoang giua %d va %d\n", num3, num1, num2);
  } else {
    printf("%d khong nam trong khoang giua %d va %d\n", num3, num1, num2);
  }

  return 0;
}
