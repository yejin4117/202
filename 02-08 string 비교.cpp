#include <iostream>	//cout, endl ��ü�� ������ ����
#include <string>	//string Ŭ������ ������ ����

#include <stdio.h>	//printf()�� ������ ����
#include <string.h>	//strcmp()�� ������ ����


//std:: �Ƚᵵ �ȴ�
using namespace std;

int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d \n", strcmp(cI, cJ) == 0);	//���� ����
	printf("%d \n", strcmp(cI, cK) < 0);	//������ aaa -> abc

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;			//���� ����
	cout << (cppI < cppK) << endl;			//������ aaa -> abc

	return 0;
}