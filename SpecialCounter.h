#pragma once
#include <iostream>

using namespace std;
class SpecialCounter
{
private:
	int LowerBound;
	int UpperBound;
	bool state;

public:
	void setOtherValues(int,int,bool);               //function prototype

	SpecialCounter(int a,int b,bool c);
	~SpecialCounter();
};

