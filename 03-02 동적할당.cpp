#include <iostream>	//cout, endl ��ü�� ������ ����

//std:: �Ƚᵵ �ȴ�
using namespace std;

int main(void)
{
	int* ptr1 = new int;	//int�� ���� �����Ҵ�
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;	//������ ª�� �ڵ忩�� ��� ������ �� �ڵ��� ���� �� �ʿ��ϴ�
}