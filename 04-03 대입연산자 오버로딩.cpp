#include <iostream>
#include <string>
#include <string.h>
using namespace std;
class Student
{
private:
	int nHakbun;
	char* sName;
public:
	//������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	//��ȯ���� �������� �ʴ´�
	Student();
	Student(int nHakbun, const char* sName);
	Student(const Student& rhs); //���������
	~Student();
	Student& operator=(const Student& rhs);
	void show();
};
Student::Student() {

}

//���Կ����� �����ε�
Student& Student::operator=(const Student& rhs)
{
	nHakbun = rhs.nHakbun;

	cout << "���Կ����� ȣ��" << endl;
	int len = strlen(rhs.sName) + 1;
	sName = new char[len];
	strcpy(sName, rhs.sName);

	return *this;
}
// ��������� �ʱ�ȭ �� �� ������ ����,
// const�� ������ ������ ������ ��������� �� �� �ִ�.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun) //�������(�Ű�����)
{
	cout << "�Ϲݻ����� ������ ȣ��." << endl;
	int len = strlen(Name) + 1;	//������ ���� �ľ�
	sName = new char[len];		//������ŭ �޸� �Ҵ�
	strcpy(sName, Name);
}
//���� �ۼ� �� �ص� �����Ϸ��� �˾Ƽ� ������ִ� 
//���������
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{

}

Student::~Student() {
	delete[]sName;
	cout << "�Ҹ��� ȣ��" << endl;
}
void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl;
}
int main() {
	//"�Ϲݻ����� ȣ��" ���
	Student stu1 = Student(1111, "BJM");
	Student stu3 = Student(2222, "JYP");
	stu1.show(); // "1111, BJM"
	//���� ������ ȣ��
	Student stu2 = stu1; //stu2 = Student(stu1)
	stu2.show();		 //(1111, "BJM")
	//���Կ����� ȣ�� (���� �����ε� ���� �� ��)
	stu1 = stu3;
	stu1.show();		 //(2222, "JYP")

	return 0;
}