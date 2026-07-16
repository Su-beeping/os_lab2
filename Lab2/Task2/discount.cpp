#include <iostream>
using namespace std;

int main() {
    const double PRICE = 199.0;
    int units;

    cout << "Enter number of units purchased: ";
    cin >> units;

    double subtotal = units * PRICE;
    double totalCost;

    if (units <= 50) {
        // No discount
        totalCost = subtotal;
    } else {
        // 20% discount
        double discount = subtotal * 0.20;
        totalCost = subtotal - discount;
    }

    cout << "Total cost of purchase: $" << totalCost << endl;

    return 0;
}
