#pragma once
#include <iostream>
#include "pch.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class Contact //����� ��� ������� �������
{
protected:          //numer zapisu w ksiazkie kontaktowej
	int index;
	// static int NumberofContact;
public:
	Contact(); //konstruktor
	Contact(int input);//, string name, string nazwisko, string work, string home)     konstruktor
	void show_index();
	int operator [] (int index); //��������� ��������
	~Contact();//destruktor
	operator string() const //�������� �������������� ���� int � string
	{
		std::string s = std::to_string(index);
		return s;
	}
	// static int getNumberofContact();
};