#include <iostream>

int countElements(int* arr) {
    if (arr == nullptr) {
        return 0;
    }

    int count = 0;
    while (*arr != 0) {
        count++;
        arr++;
    }

    return count;
}

int main() {
    int numElements;
    std::cin >> numElements;

    int arr[100];

    for (int i = 0; i < numElements; i++) {
        std::cin >> arr[i];
    }

    int* arrPtr = arr;  // Pointer to the first element of the array

    int result = countElements(arrPtr);

    std::cout << "Number of elements: " << result << std::endl;

    if (arrPtr == nullptr) {
        std::cout << "Number of elements: 0" << std::endl;
    }

    return 0;
}