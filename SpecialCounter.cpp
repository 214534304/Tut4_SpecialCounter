#include "SpecialCounter.h"
#include <iostream>

using namespace std; 

void SpecialCounter::setOtherValues(int x, int y,int z){
	LowerBound = x;
	UpperBound = y;
	step = z;

	for (int i = LowerBound; i < UpperBound; i = i + step){
		cout << i << endl;
	}
}

SpecialCounter::SpecialCounter(int d,int e, int f)
{
	LowerBound = d;
	UpperBound = e;
	step= f;
}


SpecialCounter::~SpecialCounter()
{
}
