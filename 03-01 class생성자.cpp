#include <iostream>	//cout, endl 객체를 가지고 있음
#include <string>	//string 클래스를 가지고 있음

//std:: 안써도 된다
using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	//생성자 : ?객체가 생성될 때, 호출되는 함수
	// 반환형을 갖고 있지 않는다.
public:
	Student(void);
	Student(int Hakbun, string Name);
	void show(void);
};

Student::Student()
{
	this->nHakbun = 1234;
	this->sName = "이사랑";
	cout << "학번이 등록되었습니다" << endl;
}

Student::Student(int Hakbun, string Name)
	//객체생성과 동시에 멤버변수 초기화 //멤버변수(매개변수)
	//const/참조형 멤버변수를 사용할 수 있다.
	: nHakbun(Hakbun), sName(Name)
{
	cout << "학번이 등록되었습니다" << endl;
}
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

int main(void) {
	Student stu1 = Student();
	stu1.show();

	Student stu2 = Student(1111, "JMP");
	stu2.show();

	return 0;
}