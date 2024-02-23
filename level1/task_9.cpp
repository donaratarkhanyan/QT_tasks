#include <iostream>
#include <functional>

void bubble_sort(int*, int);
void selection_sort(int*, int);

typedef std::function<void(int*, int)> Sort_function;

enum Sorting_enum {
    BUBBLE_SORT,
    SELECTION_SORT
};

struct SortingOption {
    Sorting_enum strategy;
    Sort_function sortFunction;
};

int main() {
    int choice;
    Sort_function sort = nullptr;
    
    std::cout << "1. Bubble Sort " << std::endl;
    std::cout << "2. Selection Sort " << std::endl;
    std::cout << "Enter your choice: " << std::endl;
    std::cin >> choice;
    
    SortingOption sortingOptions[] = {
        {Sorting_enum::BUBBLE_SORT, bubble_sort},
        {Sorting_enum::SELECTION_SORT, selection_sort}
    };
    
    switch (choice) {
        case 1:
            sort = sortingOptions[0].sortFunction;
            break;
        case 2:
            sort = sortingOptions[1].sortFunction;
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
void bubble_sort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// selection Sort function
void selection_sort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

