#include <stdio.h>
#include "digital_array.c"

const int N = 10;

int main() {
  int array[N];

  input_digital_array(array, N);
  output_digital_array(array, N);

  return 0;
}
