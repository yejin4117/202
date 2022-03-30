#include <iostream>
using namespace std;

void jungiuk(void)
{
	//정적 지역변수는 선언되는 순간부터 계속 유지
	static int a = 0;
	cout << "정적변수 a는" << a << endl;
	a++;
}

int main(void)
{
	jungiuk();	//0
	jungiuk();	//1
	jungiuk();	//2
}