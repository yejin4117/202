#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal ����" << endl; }
	virtual ~Animal() { cout << "Animal �Ҹ�" << endl; }

	void eat(void) { cout << "��������" << endl; }
	//roar�Լ��� �����Լ����̺� ���(���� ���̵�)
	virtual void roar(void) { cout << "����¢��" << endl; }
	void walk(void) { cout << "�����ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tiger ����" << endl; }
	virtual ~Tiger() { cout << "Tiger �Ҹ�" << endl; }

	void roar(void) override { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog ����" << endl; }
	virtual ~Dog() { cout << "Dog �Ҹ�" << endl; }

	void roar(void) override { cout << "�۸�" << endl; }
};

void main(void)
{
	Animal* animal = new Tiger();
	delete animal;
}