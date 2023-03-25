#include <iostream>
using namespace std;


class date {
public:
	date(int d = 1, int m = 1, int y= 2001);
	date(const date& oth);
	~date();
	void setdate(int d = 1, int m = 1, int y =2000);
	void setday(int d);
	void setmonth(int m);
	void setyear(int y);
	int getday() const {
		return day;
	}
	int getmonth() const {
		return month;
	}
	int getyear() const {
		return year;
	}
	void increaseday();
	void compareday(const date& othdate);
	void displaydate();
private:
	int year, month, day;
	const int monthdays[12] = { 31,29,31,30,3131,30,31 };
	const string monthstring[12] = { "january","february","march","april", "june","july","august","september","october","december" };

};


date::date(int d, int m, int y) {
	setdate(d, m, y);
}

date::~date() {
	cout << "date destroyed" << endl;
}

date::date(const date& oth) {
	day = oth.day;
	month = oth.month;
	year = oth.year;
	cout << "date copied to target." << endl;
}

void date::setday(int d) {
	if (d >= 1 && d <= monthdays[month - 1]) {
		day = d;
	}
	else {
		day = 1;
	}
}
void date::setmonth(int m) {
	if (m >= 1 && m <= 12) {
		month = m;
	}
	else {
		month = 1;
	}
}
void date ::setyear(int y) {
	if (y >= 1900) {
		year = y;
	}
	else {
		year = 1900;
	}
}

void date::setdate(int d, int m, int y) {
	setmonth(m);
	setday(d);
	setyear(y);
}
void date::displaydate() {
	cout << day << " " << monthstring[month - 1] << " " << year << endl;
}

int main() {
	date maindate;
	maindate.displaydate();

	return 0;
}




