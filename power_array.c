#ifndef POWER_ARRAY
#define POWER_ARRAY


void power_array(int array[], int size) {

  for (int i = 0; i < size; ++i) {
    array[i] = array[i] * array[i];
  }
}
#endif
