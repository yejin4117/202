#include <iostream>	//cout, endl ��ü�� ������ ����
#include <string>	//string Ŭ������ ������ ����

#include <stdio.h>	//printf()�� ������ ����

//std:: �Ƚᵵ �ȴ�
using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;
	//������ : �Oü�� ������ ��, ȣ��Ǵ� �Լ�
public:
	Student();
	Student(int Hakbun, string Name);
	void show();
};

	void Student::show(void)
	{
		cout << "�й���" << nHakbun << "�Դϴ�." << endl;
		cout << "�̸���" << sName << "�Դϴ�." << endl <<endl;
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