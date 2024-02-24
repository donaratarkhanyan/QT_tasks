#ifndef TASK_15
#define TASK_15
#include <vector>
#include <fstream>

class SortingStrategy
{
public:
    virtual void sort(std::vector<int>&) = 0;
    virtual ~SortingStrategy();
};

class BubbleSort : public SortingStrategy
{
public:
    BubbleSort() {} 
    ~BubbleSort() {} 
    void sort(std::vector<int>& vec) override;
};

class SelectionSort : public SortingStrategy
{
public:
    SelectionSort() {}
    ~SelectionSort() {} 
    void sort(std::vector<int>& vec) override;
};

class FileHandler
{
public:
    FileHandler() {} 
    ~FileHandler(); 
    std::vector<int> read_file(std::string&);
    void save_file(std::string&, std::vector<int>);
private:
    std::ifstream in_file;
    std::ofstream out_file;
};

class SortingApp {
public:
    SortingApp();
    ~SortingApp();
    void select_sort();
    void files(std::string&, std::string&);
private: 
    SortingStrategy* strategy;
    FileHandler fileHandler;
};

#endif
