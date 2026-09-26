#include <iostream>

void swap(int x, int y) {
    int z = x;
    x = y;
    y = z;
}

void bubble_sort(int* mas, int x) {
    for (int i = 0; i < x; i++) {
        for (int j = i + 1; j < x; j++) {
            if (mas[i] > mas[j]) {
                swap(mas[i], mas[j]);
            }
        }
    }
}

int main() {
    int size;

    std::cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
        std::cout << arr[i] << "\t";
    }

    std::cout << std::endl;
    bubble_sort(arr, size);

    for (int j = 0; j < size; j++) {
        std::cout << arr[j] << "\t";
    }

    std::cout << std::endl;

    delete[] arr;
}