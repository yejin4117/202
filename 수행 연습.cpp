#include <iostream>
#include <string.h>
#include<cstring>	// strcmp ���

using namespace std;

class m_string {
private:
	 char _Mysize;
	 char *_Myptr;
public:
	m_string();
	m_string(char Mysize, const char* Myptr);
	m_string(const m_string& rhs);	//���� ������
	~m_string();

	m_string operator = (const m_string & rhs);
	m_string& operator+=(const m_string& rhs);

	int operator==(const m_string& rhs);
	m_string operator+(const m_string& rhs);

	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}

	void size();
	void length();
	void c_str();

};

//������ �ʱ�ȭ
m_string::m_string()
{
	_Mysize = 0;
	_Myptr = NULL;
}

//���� ����
m_string::m_string(const m_string& rhs)
	:_Myptr(rhs._Myptr), _Mysize(rhs._Mysize)
{
	int len = strlen(rhs._Myptr) + 1;		// ������ ���� �ľ�
	_Myptr = new char[len];			// ������ŭ �޸� �Ҵ�
	strcpy(_Myptr, rhs._Myptr);
}

//���Կ�����
m_string& m_string::operator=(const m_string& rhs)
{
	_Mysize = rhs._Mysize;

	int len = strlen(rhs._Myptr) + 1;	// ������ ���� �ľ�
	_Myptr = new char[len];	// ������ŭ �޸� �Ҵ�
	strcpy(_Myptr, rhs._Myptr);

	return *this;
}

//����������
m_string operator+(const m_string& rhs)
{
	m_string tmp;
	class m_string {
		strcat(tmp._Myptr, rhs._Myptr);
		return tmp;
	}

// �񱳿�����
int m_string::operator==(const m_string& rhs) {
	return (strcmp(_Myptr, rhs._Myptr));
}

//size
int m_string::size() {  
	return _Mysize - 1;
}
//length
int m_string::length() {    
	return _Mysize - 1;
}
//c_str
int m_string::c_str() {   
	return (int)_Myptr; 
}

//�Ҹ���
m_string::~m_string()
{
	delete[]_Myptr;
}

int main(void)
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}