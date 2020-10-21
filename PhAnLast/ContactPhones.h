#pragma once
#include <iostream>
#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "Contact.h"
using namespace std;

class ContactPhones :public Contact //Класс для телефонов контакта рабочий например и домашний
{
public:
	string work;
	string home;
	ContactPhones() : Contact()
	{
		work = "";
		home = "";
#ifdef _DEBUG
		std::cout << "Pracuje construktor ContactPhones()" << std::endl;
#endif
	}
		
		;//konstructor
	
	ContactPhones(int index, string work1, string home1) : Contact(index)
	{
		work = work1;
		home = home1;
#ifdef _DEBUG
		cout << "Pracuje construktor ContactPhones() 3 arg" << std::endl;
#endif
	}		;//konstruktor
	
	ContactPhones(const ContactPhones &obj);//konstruktor kopiajacy
	
	~ContactPhones();//destruktor
	
	bool operator == (ContactPhones c2); //-operator przyciazony
	
	long operator << (int sdvig); //-operator przyciazony
	
	int show();
	
};
//ContactPhones operator + (ContactPhones c1, ContactPhones c2) //operator c 2-мя аргументами складывает номера телефонов
