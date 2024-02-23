#include <iostream>
#include <string>

int find_Max(int*, int);
int find_Min(int*, int);
double find_Average(int*, int);
std::string concat(std::string str1, const std::string str2);


int main() {
    size_t size = 9;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand()%10;
    }

    std::cout << "Maximum value in the array: " << find_Max(arr, size) << std::endl;
    std::cout << "Minimum value in the array: " << find_Min(arr, size) << std::endl;
    std::cout << "Average value of the array: " << find_Average(arr, size) << std::endl;
    
    //strings
    std::string str1 = "Hii dear ";
    std::string str2 = "student!";
    
    std::string concat_str = concat(str1, str2);
    int length = concat_str.length();
    std::cout << "Concatenated string: " << concat_str << std::endl;
    std::cout << "Length of the concatenated string: " << length << std::endl;

    return 0;
    
}
int find_Max(int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_Min(int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double find_Average(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

std::string concat(std::string str1, const std::string str2)
{
    return str1 + str2;
}


