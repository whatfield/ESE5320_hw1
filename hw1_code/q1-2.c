#include <stdlib.h>
#include <stdio.h>

void print_arr(int *arr, int len);

int main(int argc, char** argv){
  //Question 1
  int num = 20;
  int *stack_ptr = &num;
  int *heap_num = malloc(sizeof(int));
  *heap_num = 50;
  int *heap_arr = malloc(3*sizeof(int));
  heap_arr[0] = 5;
  heap_arr[1] = 6;
  heap_arr[2] = 7;

  print_arr(stack_ptr, 1);
  print_arr(heap_num, 1);
  print_arr(heap_arr, 3);

  //Question 2
  int a[2][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}};
  int *ptr_arr[2] = {a[0], a[1]};
  int **double_ptr = ptr_arr;
  //2.1
  print_arr(ptr_arr[0], 4);
  print_arr(ptr_arr[1], 4);
  //2.2
  print_arr(double_ptr[0], 4);
  print_arr(double_ptr[1], 4);

  return 0;
}

void print_arr(int *arr, int len) {
  for(int i = 0; i < len; i++){
    printf("address: %p, value: %d\n", &arr[i], arr[i]);
  }
}
