#include "pch.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "ContactPhones.h"
#include "Contact.h"
using namespace std;


	
//	ContactPhones :: ContactPhones() : Contact()

//	ContactPhones::ContactPhones(int index, string work1, string home1) : Contact(index)

	ContactPhones::ContactPhones(const ContactPhones &obj)
	{
		cout << "\nPracue Copy Construktor ContactPhones() \n";
	}
	ContactPhones :: ~ContactPhones()
	{
#ifdef _DEBUG
		std::cout << "Pracuje destruktor ContactPhones()" << std::endl;
#endif
	}
	bool ContactPhones :: operator == (ContactPhones c2) //-->�������� ��������� ���������� �������� ��������
	{
		return this->home == c2.home;
	}
	long ContactPhones :: operator << (int sdvig) // �������� ������ ������:��������� �������� ��������� ������ >> � << �������� ���� � ���������� ������ � ����� �� ��������� �����
	{
		string str = this->home;
		long longhome = atof(str.c_str()); //����������� � ����� �������� �������
		return longhome << sdvig;
	}
	int ContactPhones:: show()
	{
		cout << "Work Phone:" << work << ' ';
		cout << "Home Phone:" << home << ' ';
		return 1;
	}

