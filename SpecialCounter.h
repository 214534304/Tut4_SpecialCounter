#ifndef SPECIALCOUNTER_H
#define SPECIALCOUNTER_H

class SpecialCounter
{
public:
	SpecialCounter(int,int,int);
	~SpecialCounter();
	SpecialCounter& operator++();
	SpecialCounter& operator--();
	SpecialCounter& operator++(int);
	SpecialCounter& operator--(int);
	int getNum();

private:
	int Lower;
	int Upper;
	int step;
	bool mode;
};
#endif