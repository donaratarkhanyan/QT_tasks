#include <iostream>

enum Week {
    Monday, 
    Tuesday, 
    Wednesday, 
    Thursday, 
    Friday, 
    Saturday, 
    Sunday
};

struct Date {
    size_t day = 14;
    size_t month = 1;
    size_t year = 2005;
};

int main() {
    int day_number = 0;
    std::cout << "Enter the day number: " << std::endl;
    std::cin >> day_number;
    switch(day_number){
        case (Week::Monday):
        std::cout << "Monday";
        break;
        case (Week::Tuesday):
        std::cout << "Tuesday";
        break;
        case (Week::Wednesday):
        std::cout << "Wednesday";
        break;
        case (Week::Thursday):
        std::cout << "Thursday";
        break;
        case (Week::Friday):
        std::cout << "Friday";
        break;
        case (Week::Saturday):
        std::cout << "Saturday";
        break;
        case (Week::Sunday):
        std::cout << "Sunday";
        break;
        default:
        std::cout << "Invalid day";
        break;
    }
    std::cout << std::endl;
    Date date;
    std::cout << "Day " << date.day << std::endl 
              << "Month " << date.month << std::endl
              << "Year " << date.year << std::endl;


}

