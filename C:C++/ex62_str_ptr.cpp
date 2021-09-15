#include <stdio.h>

struct ProductInfo {
  int num;
  char name[100];
  int cost;
};

void productSale(ProductInfo *p, int percent) {
  p->cost -= p->cost * percent / 100;
}

void productSwap(ProductInfo *a, ProductInfo *b) {
  ProductInfo tmp = *a;
  *a = *b;
  *b = tmp;
}

int main() {
  ProductInfo myProduct = { 54321231, "jeju Hallabong", 10000 };
  ProductInfo otherProduct = { 34298390, "sweet Peach", 20000 };
  
  productSale(&myProduct, 10);
  productSwap(&myProduct, &otherProduct);

  printf("\"%s (%d)\" is on DC! \n It's %d now!\n", myProduct.name, myProduct.num, myProduct.cost);
}