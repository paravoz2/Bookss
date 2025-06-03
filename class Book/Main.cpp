#include <iostream>
#include<string>
#include "Book.h"

int main(){
	setlocale(LC_ALL, "ru");
	Book book1("Voina i mir", "Tolstoi", 2000);
	Book book2("Master i Margarita", "Dostotvski", 2010);
	Book book3("Rok", "Dorin", 2011);


	
	
	while (true) {
	std::cout << "Выберите номер поиска!" << std::endl;
	int number;
	std::cin >> number;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "1. Поиск по названию!" << std::endl;
	std::cout << "2. Поиск по автору!" << std::endl;
	std::cout << "3. Поиск по году!" << std::endl;	
	std::cout << "4. Выход!" << std::endl;

	std::string str;
	int num;
	
	

		switch (number)
		{
		case 1:
			std::cout << "Введите наименование" << std::endl;
			getline(std::cin, str);
			
			if (str == book1.getName()) {
				book1.show();
			}
			else if (str == book2.getName()) {
				book2.show();
			}
			else if (str == book3.getName()) {
				book3.show();
			}
			break;

		case 2:
			std::cout << "Введите автора!" << std::endl;
			getline(std::cin, str);

			if (str == book1.getAuthor()) {
				book1.show();
			}
			else if (str == book2.getAuthor()) {
				book2.show();
			}
			else if (str == book3.getAuthor()) {
				book3.show();
			}
			break;

		case 3:
			std::cout << "Введите год!" << std::endl;
			std::cin >> num;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			if (num == book1.getYear()) {
				book1.show();
			}
			else if (num == book2.getYear()) {
				book2.show();
			}
			else if (num == book3.getYear()) {
				book3.show();
			}
			break;

		case 4:			
					
			break;




		default:
			break;
		}










	}

}