#include <stdio.h>

int main(void) 
{
	int a, b, c = 0;
	//c�� ���� 1�����ϰ� a�� ����. c:1, a:1
	a = ++c;	
	//b�� c���� ���� �����ϰ� c�� 1����. b:1, c:2
	b = c++;	

	printf("%d %d %d \n", a, b, ++c);

	return 0;
}