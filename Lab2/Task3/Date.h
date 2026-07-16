#ifndef DATE_H
#define DATE_H

class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructors
    Date();                                  // default constructor
    Date(int m, int y);                      // month + year only, day defaults
    Date(int m, int d, int y);               // full constructor

    // Setters
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    // Getters
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Display in day-month-year format
    void displayDate() const;
};

#endif
