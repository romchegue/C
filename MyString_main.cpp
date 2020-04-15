// There is my realisation of the class string
#include <iostream>

int myStrlen(const char* str);

////////////////////////////////////////////////////////////////////////////////////
class MyString
{
public:
	MyString();                   // a default construcor
	MyString(const char *str);    // a constructor with parameters
	MyString(MyString &&other);   // a move constructor
	MyString(const MyString &other);    // a copy constructor
	~MyString();                  // a destructor
	MyString& operator=(const MyString &other);     // an operator =
	MyString operator+(const MyString &other);      // an operator +
	char& operator[](size_t index);                 // an operator []
	bool operator==(const MyString &other);         // an operator ==
	bool operator!=(const MyString &other);         // an operator !=
	friend std::ostream& operator << (std::ostream &out, const MyString &str); // an operator <<
	friend std::istream& operator >> (std::istream &in, MyString &str);        // an operator >>

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

char& MyString::operator[](size_t index)
{
	return this->str[index];
}

bool MyString::operator==(const MyString& other)
{
	if (this->length != other.length)
	{
		return false;
	}

	for (size_t i = 0; i < length; ++i)
	{
		if (this->str[i] != other.str[i])
		{
			return false;
		}
	}

	return true;
}

bool MyString::operator!=(const MyString& other)
{
	return !(*this==other);
}

std::ostream& operator<<(std::ostream& out, const MyString& str)     // an operator <<
{
	// for (size_t i = 0; i < str.length; i++) { os << str.str[i]; }   // the primitive implementation
	out << str.str;
	return out;
}

std::istream& operator>>(std::istream& in, MyString& str)     // an operator >>
{
	size_t size = 250;     // Maximum length of a string
	delete[] str.str;
	
	char* tempCharArray = new char[size];

	in.getline(tempCharArray, size);
	str.length = in.gcount() - 1;    
	str.str = new char[str.length + 1];

	for (size_t i = 0; i < str.length; i++)
	{
		str.str[i] = tempCharArray[i];
	}
	str.str[str.length] = '\0';

	delete[] tempCharArray;
	return in;
}


////////////////////////////////////////////////////////////////////////////////////
int myStrlen(const char* str)     // There is my realisation of std::strlen function
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


////////////////////////////////////////////////////////////////////////////////////
int main()
{
	MyString str1;
	MyString str2("World");
	
	str1 = MyString("Hello");

	std::cout << str1 << "_smth" << std::endl;
	std::cin >> str1;
	std::cout << str1 << std::endl;


	/*
	MyString str3 = str1 + MyString(" ") +  str2;
	str3.Print();
	str3[2] = 'X';
	std::cout << str3[0] << std::endl;
	
	std::cout << (str1==str2) << std::endl;
	std::cout << (str1 != str2) << std::endl;
	*/
	return 0;
}