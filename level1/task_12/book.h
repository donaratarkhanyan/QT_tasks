#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
public:
     Book(std::string title, std::string author, std::string isbn);
     
     void setTitle(std::string title);
     void setAuthor(std::string author);
     void setIsbn(std::string isbn);
     
     std::string getTitle() const;
     std::string getAuthor() const;
     std::string getIsbn() const;
private:
    std::string title;
    std::string author;
    std::string isbn;
};
#endif // BOOK_H
