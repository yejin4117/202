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
	// ��ȯ���� ���� ���� �ʴ´�.
public:
	Student(void);
	Student(int Hakbun, const char* Name);
	void show(void);
};

int main(void)
{
	Student stu1 = Student(1111, "JWP");
	stu1.show();
	return 0;
}

Student::Student(void)
{

}

Student::Student(int Hakbun, const char* Name)
//��ü������ ���ÿ� ������� �ʱ�ȭ //�������(�Ű�����)
//const/������ ��������� ����� �� �ִ�.
	: nHakbun(Hakbun)
{
	cout << "�Ϲݻ����ڰ� ȣ��" << endl;
	int len = strlen(Name) + 1; //�������� ����
	sName = new char[len]; //��������
	strcpy(sName, Name);
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl << endl;
}