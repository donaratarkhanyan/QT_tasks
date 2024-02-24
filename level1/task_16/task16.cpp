#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "task16.h"

SortingStrategy::~SortingStrategy()
{}

void BubbleSort::sort(std::vector<int>& vec) {
    size_t size = vec.size();
    for(size_t i = 0; i < size - 1; ++i){
       bool flag = false;
       for(size_t j = 0; j < size - 1 - i; ++j){
          if (vec[j] > vec[j + 1]){
              std::swap(vec[j], vec[j + 1]);
              flag = true;
          }
        }
        if (!flag){
          break;
        }

     }

}

void SelectionSort::sort(std::vector<int>& vec) {
      size_t size = vec.size();
      for (size_t i = 0; i < size - 1; ++i) {
         size_t ind = i;
         for (size_t j = i + 1; j < size; ++j) {
            if (vec[j] < vec[ind]) {
                 ind = j;
            }
         }
         std::swap(vec[i], vec[ind]);
      }
}

std::vector<int>  FileHandler::read_file(std::string& name)
{
    std::ifstream in_f(name);
    if (!in_f.is_open()) {
        throw std::invalid_argument("Don't open file!");
    }
    std::vector<int> vec;
    int x;
    while (in_f >> x) {
        vec.push_back(x);
    }
    in_f.close();
    return vec;
}

void FileHandler::save_file(std::string& name, std::vector<int> vec)
{
    std::ofstream out_file(name);
    if (!out_file.is_open()) {
        throw std::invalid_argument("Don't open output file!");
        }

    for (int num : vec) {
        out_file << num << " ";
    }
    out_file.close();
}

FileHandler::~FileHandler() {
    if (in_file.is_open()) {
        in_file.close();
    }
    if (out_file.is_open()) {
        out_file.close();
    }
}

SortingApp::SortingApp()
    :strategy(nullptr)
{}

SortingApp::~SortingApp()
{
    delete strategy;
}

void SortingApp::select_sort()
{
        int num;
        std::cout << "Select sort" << std::endl;
        std::cout << "1. Bubble Sort" << std::endl;
        std::cout << "2. Selection Sort" << std::endl;
        std::cin >> num;

        if (strategy) {
            delete strategy;
        }

        switch (num) {
            case 1:
                strategy = new BubbleSort();
                break;
            case 2:
                strategy = new SelectionSort();
                break;
            default:
                std::cout << "Error";
        }
}

void SortingApp::files(std::string& in_f, std::string& out_f) {
    std::vector<int> vec = fileHandler.read_file(in_f);
    strategy->sort(vec);
    fileHandler.save_file(out_f, vec);
}
