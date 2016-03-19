#ifndef SPECIALCOUNTER_H
#define SPECIALCOUNTER_H

class SpecialCounter
{
public:
	SpecialCounter(int,int,bool);
	~SpecialCounter();
	SpecialCounter& operator++();
	int getNum();

private:
	int Lower;
	int Upper;
	bool mode;
};
#endif