#include <iostream>	//cout, endl ��ü�� ������ ����
#include <string>	//string Ŭ������ ������ ����

//std:: �Ƚᵵ �ȴ�
using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	//������ : ?��ü�� ������ ��, ȣ��Ǵ� �Լ�
	// ��ȯ���� ���� ���� �ʴ´�.
public:
	Student(void);
	Student(int Hakbun, string Name);
	void show(void);
};

int main(void) {
	Student* stu1 = new Student();
	stu1->show();

	Student* stu2 = new Student(1111, "JWP");
	stu2->show();

	delete stu1;
	return 0;
}

Student::Student()
{
	this->nHakbun = 1234;
	this->sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}

Student::Student(int Hakbun, string Name)
	//��ü������ ���ÿ� ������� �ʱ�ȭ //�������(�Ű�����)
	//const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun), sName(Name)
{
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}
