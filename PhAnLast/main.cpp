#include <iostream>
#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "Contact.h"
#include "ContactPhones.h"
#include "ContactNames.h"
using namespace std;
ContactPhones operator + (ContactPhones c1, ContactPhones c2) //operator c 2-мя аргументами складывает номера телефонов
{
	return ContactPhones(0, c1.home + c2.home, c1.work + c2.work);
}



void Test()
{
	const int size = 2;
	ContactPhones ContactPhone[size];
	ContactNames ContactName[size];
	for (int i = 0; i < size; i++) //Цикл по тел книге
	{
		string str1;
		string str2;
		cout << "Input Name[ " << i << "]";
		cin >> str1;
		cout << "Input Surname " << i << "]";
		cin >> str2;
		ContactNames ContName(i, str1, str2);
		ContactNames ContName1;
		ContName1 = ContName; //Проверка копирующего коструктора, для примера
		ContactName[i] = ContName1;
		cout << "Input Work[ " << i << "]";
		cin >> str1;
		cout << "Input Home[ " << i << "]";
		cin >> str2;
		ContactPhones *ContPhone = new ContactPhones(i, str1, str2); //Класс, создаваемый динамически
		ContactPhone[i] = *ContPhone;
		delete ContPhone; //Освобождаем память динамический класс
	}
	for (int i = 0; i < size; i++) //Цикл по тел книге
	{
		ContactName[i].show();
		ContactPhone[i].show();
		cout << endl;
	}
	ContactNames Mr;
	Mr = ContactName[size - 1];
	string Mister = Mr + "Mr"; //Оператор + пример использования
	cout << "Test  of + 1 argument Operator " << Mister << endl;
	long PhoneSdv = ContactPhone[size - 1] << 2;
	cout << "Test of << operator PhoneSdv =  " << PhoneSdv << endl;
	cout << "Test of == operator : " << PhoneSdv << endl;
	if (ContactName[size - 1] == ContactName[size - 2])
	{
		cout << "Equal surnames " << endl;
	}
	else
	{
		cout << "Not equal surnames " << endl;
	}
	cout << "Test of sum operator with 2 arguments" << endl;
	ContactPhones TestPlus2arg = ContactPhone[size - 1] + ContactPhone[size - 2];
	TestPlus2arg.show();
	cout << endl;
	int index = ContactName[size - 1][size - 1];
	cout << "Test of index operator/ Count of elements:" << index << endl;
	char indexstring = ContactName[size - 1][size - 1];
	cout << "Test of operator transformation type int to string" << indexstring << endl;
	//cout<<Contact::getNumberofContact()<<"Number of contacts"<<endl;

}

int main()
{
	Test();
	string name;
	cin >> name;
}
