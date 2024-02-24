#include <iostream>
#include "book.h"

int main() {
    Book myBook("Poqik Ishxan", "Antuan...", "978-16-148-410");

    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getIsbn() << std::endl;

    myBook.setTitle("New Book Title");
    myBook.setAuthor("Tumanyan");
    myBook.setIsbn("978-23-456-789");

    std::cout << std::endl;
    std::cout << "Updated Title: " << myBook.getTitle() << std::endl;
    std::cout << "Updated Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Updated ISBN: " << myBook.getIsbn() << std::endl;

    return 0;
}

