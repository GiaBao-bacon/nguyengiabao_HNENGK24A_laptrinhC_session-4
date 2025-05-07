#include <stdio.h>

int main() {
  int soNguyen;

  printf("Moi nhap mot so nguyen:");
  scanf("%d", &soNguyen);

  if (soNguyen % 2 == 0) {
    printf("%d la so chan\n", soNguyen);
  } else {
    printf("%d la so le\n", soNguyen);
  }
  return 0;
}
