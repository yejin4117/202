#include <iostream>	//cout, endl ��ü�� ������ ����
#include <string>	//string Ŭ������ ������ ����

#include <stdio.h>	//printf()�� ������ ����
#include <string.h>	//strcpy()�� ������ ����


//std:: �Ƚᵵ �ȴ�
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");	//c_insert
	strcat(cMunja, "++");		//c_insert++
	printf("%s \n", cMunja);

	std::string cppMunja;
	cppMunja = "cpp_insert";	//cpp_insert
	cppMunja = cppMunja + "++";	//cpp_insert++
	cout << cppMunja << endl;

	return 0;
}