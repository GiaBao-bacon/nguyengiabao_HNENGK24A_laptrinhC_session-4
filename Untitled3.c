#include <stdio.h>

int main() {
  int soNguyen;

  printf("Nhap vao mot so nguyen: ");
  scanf("%d", &soNguyen);

  if (soNguyen % 3 == 0 && soNguyen % 5 == 0) {
    printf("%d chia het cho ca 3 va 5\n", soNguyen);
  } else if (soNguyen % 3 == 0) {
    printf("%d chia het cho 3\n", soNguyen);
  } else if (soNguyen % 5 == 0) {
    printf("%d chia het cho 5\n", soNguyen);
  } else {
    printf("%d khong chia het cho 3 hoac 5\n", soNguyen);
  }

  return 0;
}
