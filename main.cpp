#include <iostream>
#include <vector>

using namespace std;

int binary_Search (vector<int> arr, int key) {
    int middle = 0;
    int left = 0;
    int right;
    right = sizeof(arr) - 1;

    while (true) {
        middle = (left + right) / 2;

        if (key < arr[middle])
            right = middle - 1;
        else if (key > arr[middle])
            left = middle + 1;
        else
            return middle;

        if (left > right)
            return -1;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 10, 12};
    cout << binary_Search(arr, 10);
}