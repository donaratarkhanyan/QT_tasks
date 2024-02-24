#include <iostream>
#include "task15.h"

int main()
{
    SortingApp ob;
    std::string in_f = "text.txt";
    std::string out_f = "resalt.txt";


    ob.select_sort();
    ob.files(in_f, out_f);

    return 0;
}
