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
		cout << name << "의 학번은 " << hakbun << "입니다." << endl;
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
		cout << name << "의 학번은 " << hakbun << "입니다." << endl;
	}

};

int main()
{
	Student s("", "이예진", 2210);
	s.PrintShow();

	return 0;
}