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
	Student(void)
	{
		nHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�" <<endl;
	}
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();
	return 0;
}