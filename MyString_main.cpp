// There is my realisation of the class string
#include <iostream>

int myStrlen(const char* str);

class MyString
{
public:
	MyString();                   // a default construcor
	MyString(const char *str);    // a constructor with parameters
	MyString(MyString &&other);   // a move constructor
	MyString(const MyString& other);    // a copy constructor
	~MyString();                  // a destructor
	MyString& operator= (const MyString &other);     // an operator =
	MyString operator+ (const MyString &other);      // an operator +

	void Print() { std::cout << this->str; }

private:
	char* str;                    // pointer to a dynamic array of characters
	size_t length;                // size of this->str array
};



MyString::MyString()     // a default construcor
{
	this->str = nullptr;
	this->length = 0;
}

MyString::MyString(const char* str)     // a constructor with parameters
{
	this->length = myStrlen(str);
	this->str = new char[this->length + 1];

	for (size_t i = 0; i < this->length; ++i)
	{
		this->str[i] = str[i];
	}

	this->str[this->length] = '\0';
}

MyString::MyString(MyString&& other)     // a move constructor
{
	this->length = other.length;
	this->str = other.str;
	other.str = nullptr;
}

MyString::MyString(const MyString& other)     // a copy constructor
{
	this->length = other.length;
	this->str = new char[this->length + 1];

	for (size_t i = 0; i < this->length; ++i)
	{
		this->str[i] = other.str[i];
	}

	this->str[this->length] = '\0';
}

MyString::~MyString()     // a destructor
{
	delete[] str;
}

MyString& MyString::operator=(const MyString& other)     // an operator =
{
	if (this->str != nullptr)
	{
		delete[] this->str;
	}
	
	this->length = other.length;
	delete[] this->str;
	this->str = new char[this->length + 1];

	for (size_t i = 0; i < this->length; ++i)
	{
		this->str[i] = other.str[i];
	}

	this->str[this->length] = '\0';

	return *this;
}

MyString MyString::operator+(const MyString& other)     // an operator +
{
	MyString newStr;
	newStr.length = this->length + other.length;
	newStr.str = new char[newStr.length + 1];
	
	size_t i = 0;

	for (; i < this->length; ++i)
	{
		newStr.str[i] = this->str[i];
	}

	for (size_t j = 0; j < other.length; ++j, ++i)
	{
		newStr.str[i] = other.str[j];
	}

	newStr.str[i] = '\0';

	return newStr;
}


int myStrlen(const char *str)     // There is my realisation of std::strlen function
{   
	size_t i = 0;        // counter for the number of characters in the str array
	char ch = str[i];

	while (ch != '\0')
	{
		++i;
		ch = str[i];
	}

	return i;
}

int main()
{
	MyString str1;
	MyString str2("World");
	
	str1 = MyString("Hello");

	MyString str3 = str1 + MyString(" ") +  str2;
	str3.Print();

	return 0;
}