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
	void setOtherValues();               //function prototype

	SpecialCounter();
	~SpecialCounter();
};

