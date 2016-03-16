#pragma once
#include <iostream>

using namespace std;
class SpecialCounter
{
private:
	int LowerBound;
	int UpperBound;
	int step;

public:
	void setOtherValues(int,int,int);               //function prototype

	SpecialCounter(int ,int ,int );
	~SpecialCounter();
};

