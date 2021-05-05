#include <iostream>
using namespace std;

int binarySearch (const int array[], int left, int right, int key) {

    int middle;
    while (true) {
        middle = (left + right) / 2;
        if (key < array[middle])
            right = middle -1 ;
        else if (key > array[middle])
            left = middle + 1;
        else return middle;

        if (left > right) return -1;
    }
}


int main() {
  const int SIZE = 12;
  int array[SIZE] = {};
  int key = 0;
  int index;

  for (int i = 0; i < SIZE; i++) {
      array[i] = i + 1;
      cout << array[i];
  }
  cin >> key;

  index = binarySearch(array, 0, SIZE, key);

  if (index >= 0)
      cout << "Указанное число находится в ячейке с индексом: " << index << " ";
  else
      cout << "Такого числа в массиве нет!";

    return 0;
}