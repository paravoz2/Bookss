#include "Book.h"

Book::Book(const std::string& name, const std::string& author, int year): name_(name), author_(author), year_(year) {}
void Book::show()
{
    std::cout << "Name book: " << name_ << std::endl;
    std::cout << "Author book: " << author_ << std::endl;
    std::cout << "Name year: " << year_ << std::endl;
}

std::string Book::getName()
{
    return name_;
}

std::string Book::getAuthor()
{
    return author_;
}

int Book::getYear()
{
    return year_;
}

