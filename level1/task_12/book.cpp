#include "book.h"

Book::Book(std::string title, std::string author, std::string isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
}

void Book::setTitle(std::string title) {
    this->title = title;
}

void Book::setAuthor(std::string author) {
    this->author = author;
}

void Book::setIsbn(std::string isbn) {
    this->isbn = isbn;
}

std::string Book::getTitle() const{
    return title;
}

std::string Book::getAuthor() const{
    return author;
}

std::string Book::getIsbn() const{
    return isbn;
}

