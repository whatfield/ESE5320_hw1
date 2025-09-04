#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv){
  double a[] = {3.14, 2.71};

  //cast array to unsigned char
  unsigned char *byte_ptr = (unsigned char *)a;
  //get size of array in bytes
  size_t size = sizeof(a);

  //print each byte in array by dereferencing unsigned char pointer
  for(size_t i = 0; i < size; i++) {
    printf("%02x\n", byte_ptr[i]);
  }

  return 0;
}
