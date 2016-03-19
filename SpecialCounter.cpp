#include "SpecialCounter.h"
#include <iostream>

SpecialCounter::SpecialCounter(int l = 0, int u = 255 , bool m=true)
{
	Lower = l;
	Upper = u;
	mode = m;
}

SpecialCounter::~SpecialCounter()
{
}
//Prefix increment
SpecialCounter& SpecialCounter::operator++(){

	while (Lower < Upper){
		std::cout << ++Lower << std::endl;
	}
		



	return *this;
}

