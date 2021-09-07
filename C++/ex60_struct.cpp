#include <stdio.h>

struct ProductInfo {
  int num; // 4Byte
  char name[100]; // 100Byte
  int cost; // 4Byte
};

int main() {
  ProductInfo myProduct = { 54321231, "jeju Hallabong", 19900 };
  printf("product num: %d // address = %d\n", myProduct.num, &myProduct.num);
  printf("product name: %d // address = %d\n", myProduct.name, &myProduct.name);
  printf("product price: %d // address = %d\n", myProduct.cost, &myProduct.cost);

  printf("sizeof(myProduct) = %d", sizeof(myProduct));
}