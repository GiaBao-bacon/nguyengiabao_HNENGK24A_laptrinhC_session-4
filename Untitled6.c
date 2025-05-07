#include <stdio.h>

int main() {
  int chiSoCu, chiSoMoi, soDienTieuThu;
  float tienDien;

  printf("Nhap vao chi so cong to dien thang truoc: ");
  scanf("%d", &chiSoCu);

  printf("Nhap vao chi so cong to dien thang nay: ");
  scanf("%d", &chiSoMoi);

  soDienTieuThu = chiSoMoi - chiSoCu;

  if (soDienTieuThu < 0) {
    printf("Chi so moi khong duoc nho hon chi so cu.\n");
    return 1;
  }

  if (soDienTieuThu <= 50) {
    tienDien = soDienTieuThu * 10000;
  } else if (soDienTieuThu <= 100) {
    tienDien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
  } else if (soDienTieuThu <= 150) {
    tienDien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
  } else if (soDienTieuThu <= 200) {
    tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
  } else {
    tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
  }

  printf("So dien tieu thu: %d kWh\n", soDienTieuThu);
  printf("Tien dien thang nay: %.0f VND\n", tienDien);

  return 0;
}
