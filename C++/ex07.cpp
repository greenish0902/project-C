#include <stdio.h>

int main() {
  float weight, height;
  printf("키(m): ");
  scanf("%f", &height);
  printf("몸무게(kg): ");
  scanf("%f",&weight);
  float BMI = (weight / (height*height));
  printf("BMI(kg/m^2)는 %.3f 입니다.", BMI);
}