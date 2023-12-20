#include "MyString.h"
#include <iostream>
#include<locale>

using namespace std;

MyString::MyString() {
	//setlocale(LC_ALL, "Russian");
	system("chcp 1251 > nul");
	string = nullptr;
	string_length = 0;
	char a;
	while (cin) {
		
		cin >> noskipws >> a;
		if (a == '\n') break;
		append(a);
	
	}
	
}



MyString::MyString(const char* str)
{
	system("chcp 1251 > nul");
	string = nullptr;
	string_length = 0;
	append(str);
	/*
	string_length = str_length(str);
	string = new char[string_length +1];
	for (int i = 0; i < string_length; ++i)
	{
		*(string + i) = *(str + i);
	}
	string[string_length] = '\0';
	*/
			
}

MyString::~MyString() {
	delete[] string;
};

void MyString::text_to_lower() {
	for (int i = 0; i < string_length; i++)
	{
		if (*(string + i) >= 'A' && *(string + i) <= 'Z') {
			*(string + i) += 32;
		}if ((*(string + i)) >= 'А' && *(string + i) <= 'Я') {
			*(string + i) += 32;
		}
	}
}

void MyString::text_to_upper() {
	for (int i = 0; i < string_length; ++i)
	{
		if (*(string + i) >= 'a' && *(string + i) <= 'z') {
			*(string + i) -= 32;
		}if ((*(string + i)) >= 'а' && *(string + i) <= 'я'){
			*(string + i) -= 32;
		}
	}
}

void MyString::Text() {
	
	if (string != nullptr) {
		for (int i = 0; i < str_length(string); ++i)
		{
			cout << *(string + i);
		}
		cout << endl;
	}
	else cout << "массив пуст" << endl;
}

char MyString::take_elem(int index) {
	
	if (index<0 or index >string_length) {
		cout << "Недопустимый индекс" << endl;
		return 0;
	}
	else {
		return *(string + index);
	}
	
}

void MyString::append(const char* str) {
	int app_str_length = str_length(str);
	
	char* new_string = new char[app_str_length + string_length + 1];

	int i = 0;
	for (; i < string_length; ++i)
	{
		*(new_string+i) = *(string+i);
	}

	
	for (int j = 0; j < app_str_length; ++j)
	{
		
		*(new_string+i) = *(str+j);
		++i;
		
	}
	
	delete[] this->string;
	string_length = app_str_length + string_length;
	string = new_string;
	*(string+ string_length) = '\0';
	
	

}
void MyString::append(char elem) {
	
	//cout << string_length << endl;
	char* new_string = new char[string_length + 2];
	for (int i = 0; i < string_length; ++i) {
		*(new_string + i) = *(string + i);
	}
	delete[] this->string;
	
	*(new_string + string_length) = elem;
	++string_length;
	*(new_string + string_length) = '\0';
	
	string = new_string;
	
}



int MyString::str_length(const char* str) {
	int length = 0;
	while (*(str + length) != '\0')
	{
		++length;
	}
	return length;
}

int MyString::length() {
	return string_length;
}

