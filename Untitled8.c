#include <stdio.h>

int main() {
  float a, b, c;

  printf("Nhap vao do dai canh thu nhat cua tam giac: ");
  scanf("%f", &a);

  printf("Nhap vao do dai canh thu hai cua tam giac: ");
  scanf("%f", &b);

  printf("Nhap vao do dai canh thu ba cua tam giac: ");
  scanf("%f", &c);

  if (a + b > c && a + c > b && b + c > a) {
    printf("Day la 3 canh cua tam giac\n");
  } else {
    printf("Khong phai la 3 canh cua tam giac\n");
  }

  return 0;
}
