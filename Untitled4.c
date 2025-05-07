#include <stdio.h>

int main() {
  int thang;

  printf("Nhap vao so thu tu cua thang (1-12): ");
  scanf("%d", &thang);

  if (thang >= 1 && thang <= 12) {
    if (thang == 2) {
      printf("Thang 2 co the co 28 hoac 29 ngay (nam nhuan).\n");
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
      printf("Thang %d co 30 ngay\n", thang);
    } else {
      printf("Thang %d co 31 ngay\n", thang);
    }
  } else {
    printf("So thang khong hop le\n");
  }

  return 0;
}
