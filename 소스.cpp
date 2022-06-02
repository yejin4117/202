#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string sName;	//이름
protected:
	int nAge;	//나이
public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person() {
	sName = "익명";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age) {
	/* 
	sName = name
	nAge = age
	*/
}

void Person::hi() {
	cout << "이름 : " << sName << endl;
	cout << "나이 : " << nAge << endl;
}

class Student : private Person {
	/*
private:
	string sName;	//이름
protected:
	int nAge;	//나이
public:
	Person();
	Person(string name, int age);
	void hi();
	*/
private:
	int nHakbun;	//학번
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

Student::Student() :Person() {
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun)
	:Person(name,age),nHakbun(hakbun){}

void Student::study() {
	hi();
}

int main(void){
	Person* person = new Person("이예진", 100);
	person->hi();

	Student student;
	student.study();
}