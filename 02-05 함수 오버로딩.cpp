//cout, endl 객체를 가지고 있음
#include <iostream>
//std:: 안써도 된다
using namespace std;

//pre컴파일러가 처리
//자료형에 영향받지 않음
//#define jegob(A)	((A) * (A))

//함수 이름은 같고, 매개 변수는 다름(함수 오버로딩)
int jegob(int A, int B = 1)
{
	return A * A + B;
}

double jegob(double A, double B = 1.1)
{
	return A * A + B;
}

int main(void)
{
	cout << jegob(4,1) << endl;	//jegob(4, 1) : 17
	cout << jegob(3.3,1.1) << endl;	//jegob(3.3,1.1) : 11.99
	return 0;
}