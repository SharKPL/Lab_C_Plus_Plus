#pragma once

class MyString {
public:
	MyString();
	MyString(const char* str);
	~MyString();

	void Text();
	int length();
	void text_to_lower();
	void text_to_upper();
	char take_elem(int index);
	void append(const char* str);
	void append(char elem);



private:
	int str_length(const char* str);
	char* string;
	int string_length;
};