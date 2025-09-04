#include <stdlib.h>
#include <stdio.h>

void temp(int i);

void temp(int i) {
  int a[2];
  int b[3];
  int *c;
  int *d;
  c = (int *)malloc(sizeof(int) * 4);
  d = (int *)malloc(sizeof(int) * 5);

  printf("a: %p, b: %p, c: %p,  d: %p", a, b, c, d);

  return;
}

int main(int argc, char **argv){
  temp(1);
  return 0;
}
