#pragma once
#include <iostream>

class Book {
private:
    std::string name_;
    std::string author_;
    int year_;
    

public: 


    Book(const std::string& name, const std::string& author, int year);
    
    std::string getName();
    std::string getAuthor();
    int getYear();
    void show();

};

