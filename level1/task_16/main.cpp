#include <iostream>
#include "task16.h"

int main() {
    std::string inputFile = "text.txt";
    std::string outputFile = "output.txt";

    SortingApp sortingApp;

    try {
        sortingApp.select_sort();
        sortingApp.files(inputFile, outputFile);
        std::cout << "Sorting completed successfully." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}

