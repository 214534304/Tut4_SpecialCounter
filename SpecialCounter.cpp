#include "SpecialCounter.h"
#include <iostream>

SpecialCounter::SpecialCounter(int l = 0, int u = 255 , int s = 1)   //constructor
{
	Lower = l;
	Upper = u;
	step = s;
}

SpecialCounter::~SpecialCounter()
{
}
//Prefix increment
SpecialCounter& SpecialCounter::operator++(){
		while (Lower < Upper){
			Lower += step;
			if (Lower <= Upper) std::cout << Lower<< std::endl;
		}
	return *this;
}

SpecialCounter& SpecialCounter::operator--(){
		while (Lower < Upper){
			Upper -= step;
			if (Lower <= Upper) std::cout << Upper << std::endl;
		}
	return *this;
}

//Postfix increment
SpecialCounter& SpecialCounter::operator++(int){
	while (Lower < Upper){
		std::cout << Lower << std::endl;
		if (Lower <= Upper)  Lower += step;       //this condition makes sure we get values less and equal to Upperlimit
	}
	return *this;
}

SpecialCounter& SpecialCounter::operator--(int){
	while (Lower < Upper){
		std::cout << Upper << std::endl;
		if (Lower <= Upper) Upper -= step;
	}
	return *this;
}