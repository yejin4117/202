#include <iostream>	//cout, endl ��ü�� ������ ����
#include <string>	//string Ŭ������ ������ ����

#include <stdio.h>	//printf()�� ������ ����

//std:: �Ƚᵵ �ȴ�
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s \n", cI);			//���ڿ� ���� �ּ�

	string cppI = "aaa";
	printf("%s \n", cppI.c_str());	//���ڿ� ���� �ּ�


	return 0;
}