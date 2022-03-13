// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int count_value = size + 1;
  int left = 0;
  int right = size - 1;
  int mid = size / 2;
  for (int i = 0; i < mid; i++) {
    if (arr[i] != value) {
      count_value--;
    }
  }
  for (int j = size; j >= mid; j--) {
    if (arr[j] != value) {
      count_value--;
    }
  }
  return count_value;
}
