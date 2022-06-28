#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class Person
{
private:
	string name;
	int hakbun;
public:
	Person(string name, int hakbun)
		:name(name), hakbun(hakbun){}

	void PrintShow() {
		cout << name << "�� �й��� " << hakbun << "�Դϴ�." << endl;
	}
};
class Student : public Person
{
private:
	string university;
public:
	Student(string university, string name, int hakbun)
		:Person(name, hakbun), university(university) {}
	void PrintShow() {
		cout << name << "�� �й��� " << hakbun << "�Դϴ�." << endl;
	}

};

int main()
{
	Student s("", "�̿���", 2210);
	s.PrintShow();

	return 0;
}