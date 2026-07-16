#include <iostream>
using namespace std;

int main() {
    double width, length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter length of rectangle: ";
    cin >> length;

    double area = width * length;
    double perimeter = 2 * (width + length);

    cout << "Area of Rectangle: " << area << endl;
    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}
