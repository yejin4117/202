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
	Student(void)
	{
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다" <<endl;
	}
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();
	return 0;
}