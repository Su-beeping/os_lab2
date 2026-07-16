#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    // Test default constructor
    Date d1;
    cout << "Default Date: ";
    d1.displayDate();

    // Test constructor with month, day, year (valid month)
    Date d2(7, 16, 2026);
    cout << "Date d2: ";
    d2.displayDate();

    // Test constructor with invalid month (should default to 1)
    Date d3(15, 25, 2025);
    cout << "Date d3 (invalid month 15 -> defaults to 1): ";
    d3.displayDate();

    // Test constructor with month and year only
    Date d4(9, 2024);
    cout << "Date d4 (month & year only): ";
    d4.displayDate();

    // Test setters and getters
    d1.setMonth(12);
    d1.setDay(31);
    d1.setYear(2025);
    cout << "Date d1 after setters: ";
    d1.displayDate();

    cout << "d1 -> Month: " << d1.getMonth()
         << ", Day: " << d1.getDay()
         << ", Year: " << d1.getYear() << endl;

    // Test invalid month via setter
    d2.setMonth(0);
    cout << "Date d2 after setMonth(0) (invalid -> defaults to 1): ";
    d2.displayDate();

    return 0;
}
