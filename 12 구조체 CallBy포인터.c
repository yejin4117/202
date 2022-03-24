#include <stdio.h>

typedef struct
{
	float x;
	float y;
}Jum;

void AddValueToJum(Jum* j);

int main(void)
{
	Jum jum;
	jum.x = 5.0f;
	jum.y = 10.0f;
	//Call By Value�� jum�� x,y���� �ٲ��� ����
	AddValueToJum(jum);
	printf("%.1f, %.1f \n", jum.x, jum.y);

	return 0;
}

void AddValueToJum(Jum j)
{
	j.x += 10.0f;
	j.y += 15.0f;
}