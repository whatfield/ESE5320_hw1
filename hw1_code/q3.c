#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
  struct s2 {
  float a;
  int b;
  };

  struct s1 {
    int c;
    struct s2 **d;
  };

  struct s1 x[5];

  struct s1 test1;
  struct s2 test2;
  struct s2 *test2_ptr;
  struct s2 **test2_dptr;

  test2.a = 8.7;
  test2.b = 9;

  test2_ptr = &test2;
  test2_dptr = &test2_ptr;

  test1.c = 0;
  test1.d = test2_dptr;

  x[2] = test1;
  int *b_ptr = &((*x[2].d)->b);

  printf("address: %p, value: %d", b_ptr, *b_ptr);
  return 0;
}
