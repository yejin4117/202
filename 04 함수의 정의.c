#include <stdio.h>

//�Լ��� ����(�Լ��� ���� �޸� ���� �Ҵ�
int sum(int a, int b);

int main(void) 
{
	printf("d", sum(1, 2));
}

//�Լ��� ����
int sum(int a, int b)
{
	return a + b;
}