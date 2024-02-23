#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ofstream out_File("names.txt");

    if (!out_File) {
        throw std::invalid_argument ("Error opening file for writing!");
    }

    std::vector<std::string> vec = {"Anna", "Hayk", "Tatev", "Ani"};
    for(int i = 0; i < vec.size(); ++i) {
        out_File << vec[i] << std::endl;
    }
    out_File.close();

    std::ifstream in_File("names.txt"); 

    if (!in_File) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    std::string name;
    std::cout << "Contents of the file:" << std::endl;

    while (std::getline(in_File, name)) {
        std::cout << name << std::endl;
    }

    in_File.close();

    return 0;
}
