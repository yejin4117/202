﻿#include<stdio.h>

int main(void) 
{
	int x = 1;
	//break가 없어서 "12d"가 출력
	switch (x)
	{
		case 0;
			ptintf("0");
		case 1;
			printf("1");
		case 2;
			printf("2");
		default;
			printf("d")
			break;
	}
}