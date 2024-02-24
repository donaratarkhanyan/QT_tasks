#ifndef TASK_15
#define TASK_15
#include <vector>

class SortingStrategy
{
public:
    virtual void sort(std::vector<int>&) = 0;
    virtual ~SortingStrategy();
};

class BubbleSort : public SortingStrategy
{
public:
    void sort(std::vector<int>& vec) override;
};

class SelectionSort : public SortingStrategy
{
    void sort(std::vector<int>& vec) override;
};

class FileHandler 
{
public:
    std::vector<int> read_file(std::string&);
    void save_file(std::string&, std::vector<int>);
};

class SortingApp {
private:
    SortingStrategy* strategy;
    FileHandler fileHandler;

public:
    SortingApp();
    ~SortingApp();
    void select_sort();
    void files(std::string&, std::string&);
};

#endif
