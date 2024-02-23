#include <iostream>
#include <functional>

void bubble_sort(int*, int);
void selection_sort(int*, int);

typedef std::function<void(int*, int)> Sort_function;

int main() {
    int choice;
    Sort_function sort = nullptr;
    
    std::cout << "1. Bubble Sort " << std::endl;
    std::cout << "2. Selection Sort " << std::endl;
    std::cout << "Enter your choice: " << std::endl;
    std::cin >> choice;
    
    
    switch (choice) {
        case 1:
            sort = bubble_sort;
            break;
        case 2:
            sort = selection_sort;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            return 1;
    }

    size_t size = 9;
    int arr[size];
    for(int i = 0; i < size; ++i) {
        arr[i] = rand() %10;
    }

     
    
    if (sort != nullptr) {
        sort(arr, size);
        std::cout << "Sorted array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;

}

//bubble sort
void bubble_sort(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Selection Sort function
void selection_sort(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

