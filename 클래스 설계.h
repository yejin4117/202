#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class IDLE
{
private:
	int num;
	string Name;

public:
	void 춤추다();
	void 랩하다();

};

class GIDLE : public IDLE
{
private:
	int 에너지;

public:
	void 놀다();

};

class GIDLE : public IDLE
{
private:
	int 가창력;

public:
	void 공연하다();
	void 노래하다();

};