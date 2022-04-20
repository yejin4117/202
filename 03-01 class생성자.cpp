#include <iostream>	//cout, endl 객체를 가지고 있음
#include <string>	//string 클래스를 가지고 있음

#include <stdio.h>	//printf()를 가지고 있음

//std:: 안써도 된다
using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;
	//생성자 : 갣체가 생성될 때, 호출되는 함수
public:
	Student();
	Student(int Hakbun, string Name);
	void show();
};

	void Student::show(void)
	{
		cout << "학번은" << nHakbun << "입니다." << endl;
		cout << "이름은" << sName << "입니다." << endl <<endl;
	}
};


int main(void)
{
	Student stu1;
	stu1. show();
	Student stu2 = Student();
	stu2.show();
	return 0;
}