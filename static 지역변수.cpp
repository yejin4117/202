#include <iostream>
using namespace std;

void jungiuk(void)
{
	//���� ���������� ����Ǵ� �������� ��� ����
	static int a = 0;
	cout << "�������� a��" << a << endl;
	a++;
}

int main(void)
{
	jungiuk();	//0
	jungiuk();	//1
	jungiuk();	//2
}