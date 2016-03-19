#include "SpecialCounter.h"
#include <iostream>
using namespace std;

int main(){
	void menu1();  //function declaration
	void menu2();
	int option;
	int mode;

	menu1();   //calling menu 1
	cin >> mode;
	cout << endl;

	if (mode == 1){
		menu2();     //calling me2
		cin >> option;
		cout << endl;
		if (option == 1){
			SpecialCounter obj(0, 255, 1);
			++obj;
		}
		else if (option == 2){
			SpecialCounter obj(0, 255, 1);
			--obj;
		}
		else if (option == 3){
			SpecialCounter obj(20, 210, 3);
			++obj;
		}
		else if (option == 4){
			SpecialCounter obj(20, 210, 2);
			--obj;
		}
	}
	else if (mode == 2){
		menu2();
		cin >> option;
		cout << endl;
		if (option == 1){
			SpecialCounter obj(0, 255, 1);
			obj++;
		}
		else if (option == 2){
			SpecialCounter obj(0, 255, 1);
			obj--;
		}
		else if (option == 3){
			SpecialCounter obj(20, 210, 3);
			obj++;
		}
		else if (option == 4){
			SpecialCounter obj(20, 210, 2);
			obj--;
		}
	}
	
	return 0;
}

void menu1(){
	cout << "1. Prefix" << endl;          //prompt the user
	cout << "2. Postfix" << endl;
}

void menu2(){
	cout << "1. 0 to 255" << endl;
	cout << "2. 255 to 0" << endl;
	cout << "3. 20 to 210" << endl;
	cout << "4. 210 to 20" << endl;
}