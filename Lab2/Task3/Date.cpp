#include <iostream>
#include "Date.h"
using namespace std;

// Default constructor
Date::Date() {
    month = 1;
    day = 1;
    year = 2000;
}

// Constructor with month and year (day defaults to 1)
Date::Date(int m, int y) {
    setMonth(m);
    day = 1;
    year = y;
}

// Constructor with month, day and year
Date::Date(int m, int d, int y) {
    setMonth(m);
    day = d;
    year = y;
}

// Setters
void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) {
        month = m;
    } else {
        month = 1;
    }
}

void Date::setDay(int d) {
    day = d;
}

void Date::setYear(int y) {
    year = y;
}

// Getters
int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

// Display date in day-month-year format
void Date::displayDate() const {
    cout << day << " - " << month << " - " << year << endl;
}
