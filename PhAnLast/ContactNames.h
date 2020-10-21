#pragma once
#include <iostream>
#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "Contact.h"
using namespace std;

class ContactNames : public Contact // Класс для имен контакта фамилия там Имя например
{
protected:
	string name;
	string nazwisko;
public:
	ContactNames() : Contact()
	{
		name = "";
		nazwisko = "";
#ifdef _DEBUG
		std::cout << "Pracuje construktor ContactNames()" << std::endl;
#endif
	};//konstruktor
	ContactNames(int index, string name1, string nazwisko1) : Contact(index)
		
	{
		name = name1;
		nazwisko = nazwisko1;
#ifdef _DEBUG
		std::cout << "Pracuje construktor ContactNames() 3 arg" << std::endl;
#endif
	}; //konstruktor
	ContactNames(const ContactNames &obj);//konstruktor kopiajacy
	~ContactNames();//destruktor
	string operator + (string s1); //operator przyciazony
	int show();//funkcja
	bool operator == (ContactNames c2); //operator przyciazony
	
};