#include<stdio.h> 
int main() {
  int soNguyen;
  printf("Moi nhap so nguyen: ");
  scanf("%d", &soNguyen);
  if (soNguyen > 0) {
    printf("So nay la so duong\n");
  } else if (soNguyen < 0) {
    printf("So nay la so am\n");
  } else {
    printf("So nay la so khong\n");
  }
	return 0; 
}
