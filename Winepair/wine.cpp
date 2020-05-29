#include "wine.h"
using namespace std;
Wine::Wine(const char * l, int y, const int yr[], 
	const int bot[]):name(l),year(y) {
	pair.first() = ArrayInt(yr,year);
	pair.second()=ArrayInt(bot,year);
}
Wine::Wine(const char * l, int y) :name(l), year(y) {
	pair.first() = ArrayInt(year);
	pair.second() = ArrayInt(year);
}

void Wine::GetBottles(){
	cout << "Enter " << name << "Wash data for " << year << "years:\n" ;
	for (int i = 0; i < year; i++) {
		cout << "Enter year:";
		cin >> pair.first()[i];
		cout << "Enter bottles for that year:";
		cin >> pair.second()[i];
	}	
}
int Wine::sum() const {
	return pair.second().sum();
}
void Wine::show() const {
	cout << "Wine:" << name << endl;
	cout << "\t\t" << "Year" << "\t" << "Bottles" << endl;
	for(int i=0;i<year;i++)
		cout << "\t\t" << pair.first()[i] << "\t" << pair.second()[i] << endl;
}