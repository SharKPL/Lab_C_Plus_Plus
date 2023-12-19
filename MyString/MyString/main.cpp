#include "MyString.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	MyString str = MyString();

	//MyString str("sadasd");

	str.Text();
	//cout << str.length() << endl;
	//str.text_to_lower();
	//str.Text();
	str.text_to_upper();
	str.Text();
	//str.append("ff");
	//str.Text();
	//str.append('ã');
	//str.Text();
	////cout << str.length() << endl;
	//cout << str.take_elem(1) << endl;



	return 0;
}