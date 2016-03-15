#include "SpecialCounter.h"

int step = 1;
void SpecialCounter::setOtherValues(int x, int y,bool z){
	LowerBound = x;
	UpperBound = y;
	state = z;

	for (int i = LowerBound; i < UpperBound; i = i + step){

	}
}

SpecialCounter::SpecialCounter(int d,int e, bool f)
{
	LowerBound = d;
	UpperBound = e;
	state = f;
}


SpecialCounter::~SpecialCounter()
{
}
