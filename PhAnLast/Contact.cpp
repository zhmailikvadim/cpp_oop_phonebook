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


	Contact :: Contact() //����������� 2 ����������
	{
		index = 0;
#ifdef _DEBUG
		std::cout << "Pracuje construktor contact()" << std::endl;
		//NumberofContact++
#endif
	}
	Contact:: Contact(int input)//, string name, string nazwisko, string work, string home)
	{

		index = input;
#ifdef _DEBUG
		std::cout << "Pracuje construktor contact() 1 arg" << std::endl;
	
#endif
	
	}

	void Contact:: show_index()
	{
		cout << "Index of element:" << index << endl;
	}
	int Contact :: operator  [] (int index) //��������� ��������
	{
		return index + 1; //��� ������� ���������� ������+1 ����� ��� ������ �������
	}
	Contact :: ~Contact()
	{
#ifdef _DEBUG
		std::cout << "Pracuje destruktor contact()" << std::endl;
		//NumberofContact--
#endif
	}


	//int Contact::NumberofContact = 0;
	//int Contact::getNumberofContact() { return NumberofContact; }

