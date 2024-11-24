#include <stdio.h>

int main() {
  int num1, num2, num3;
  printf("Nhap vao 3 so nguyen: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  if ((num2 < num3 && num3 < num1) || (num1 < num3 && num3 < num2)) {
    printf("So thu ba nam giua so thu nhat va so thu hai\n");
  } else {
    printf("So thu ba khong nam giua so thu nhat va so thu hai\n");
  }

  return 0;
}
