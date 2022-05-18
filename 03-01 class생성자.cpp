#include <iostream>   //cout, endl ��ü�� ������ ����
#include <string>   //string Ŭ������ ������ ����

//std:: �Ƚᵵ �ȴ�
using namespace std;

class Student
{
private:
	int nHakbun;
	char* sName;

	//������ : ?��ü�� ������ ��, ȣ��Ǵ� �Լ�

public:
	Student(void);
	Student(int Hakbun, const char* Name);
	Student(const Student& rch);
	//�Ҹ��� : ��ü�� �޸𸮿��� ������ �� ȣ��Ǵ� �Լ�
	~Student();
	void show(void);

};

int main(void)
{
	Student stu1 = Student(1111, "JWP");
	//��������� ȣ��
	Student stu2 = stu1;

	stu1.show();
	stu2.show();

	return 0;
}
//Student::Student(int Hakbun, string name) {
//   this->nHakbun = Hakbun;
//   this->sName = name;
//   cout << "�й��� ��� �Ǿ����ϴ�." << endl;
//}


Student::Student(int Hakbun, const char* Name)
//��ü������ ���ÿ� ������� �ʱ�ȭ //�������(�Ű�����)
//const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "�Ϲݻ����ڰ� ȣ��" << endl;
	int len = strlen(Name) + 1; //�������� ����
	sName = new char[len]; //��������
	strcpy(sName, Name);	//�Ű������� �ִ� ���ڿ� ����

}

Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "��������� ȣ��" << endl;
}

Student::~Student()
{
	delete[] sName;
	cout << "�Ҹ��� ȣ��" << endl;
}

void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}