#ifndef SPECIALCOUNTER_H
#define SPECIALCOUNTER_H

class SpecialCounter
{
public:
	SpecialCounter(int,int,int);
	~SpecialCounter();
	SpecialCounter& operator++();     //overloading increment
	SpecialCounter& operator--();
	SpecialCounter& operator++(int);   //overloading decrement
	SpecialCounter& operator--(int);
	

private:
	int Lower;
	int Upper;
	int step;
	bool mode;
};
#endif