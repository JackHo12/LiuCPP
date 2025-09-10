#include <iostream>
#include <iomanip>

using namespace std;

// getNum is a function that gets a number from user input with validation
void getNum(float &num, float compareNum, string a1, string a2) {
    while (true) {
        cout << "Enter " << a1 << ": "<< flush;
        cin >> num;
        if (num < compareNum) {
            cout << a2 << endl;
        } else {
            break;
        }
    }
}

int main() {
    cout << fixed << setprecision(2);
    float num1{}, num2{}, num3{}, num4{};
    getNum(num1, 0.0, "first price", "ERROR: First price must be at least 0 (zero) SEK");
    getNum(num2, num1, "last price ", "ERROR: Last price must be bigger than First price");
    getNum(num3, 0.01, "stride", "ERROR: Stride must be at least 0.01 SEK");
    getNum(num4, 1.0, "tax percent", "ERROR: Tax percent must be at least 1 %");
    float tax{}, PWT{};
    for (float price = num1; price <= num2; price += num3) {
        tax = price * (num4 / 100);
        PWT = price + tax;
        cout << setw(10) << price << setw(20) << tax << setw(20) << PWT << endl;
    }
    return 0;
}