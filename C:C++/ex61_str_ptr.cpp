#include <stdio.h>

struct ProductInfo {
  int num; // 4Byte
  char name[100]; // 100Byte
  int cost; // 4Byte
};

int main() {
  ProductInfo myProduct = { 54321231, "jeju Hallabong", 19900 };

  ProductInfo *ptr_product = &myProduct;

  printf("Product num: %d\n", ptr_product->num); //(*ptr_product).num;
  printf("Product name: %s\n", ptr_product->name);
  printf("Product price: %d\n", ptr_product->cost);
}