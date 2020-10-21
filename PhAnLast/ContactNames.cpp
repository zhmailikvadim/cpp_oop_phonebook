#include "pch.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "ContactNames.h"
using namespace std;

//	ContactNames :: ContactNames()// : Contact()

//	ContactNames :: ContactNames(int index, string name1, string nazwisko1) //: Contact(index) //Конструктор наме

	ContactNames ::  ContactNames(const ContactNames &obj)
	{
		cout << "\nPracue Copy Construktor ContactNames() \n";
	}
	ContactNames :: ~ContactNames()
	{
#ifdef _DEBUG
		std::cout << "Pracuje destruktor ContactNames()" << std::endl;
#endif
	}
	string ContactNames :: operator + (string s1) //добавляет символы к имени оператор с 1 аргументом
	{
		return s1 + this->name;
	}
	int ContactNames:: show()
	{
		cout << "Imie:" << name << ' ';
		cout << "Nazwisko:" << nazwisko << ' ';
		return 1;
	}
	bool ContactNames ::  operator == (ContactNames c2) //-->Оператор сравнения сравнивает nazwishko
	{
		return this->nazwisko == c2.nazwisko;
	}
