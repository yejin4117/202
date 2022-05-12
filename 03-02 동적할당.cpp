#include <iostream>	//cout, endl 객체를 가지고 있음

//std:: 안써도 된다
using namespace std;

int main(void)
{
	int* ptr1 = new int;	//int형 공간 동적할당
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;	//지금은 짧은 코드여서 상관 없지만 긴 코드일 때는 꼭 필요하다
}