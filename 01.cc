#include <iostream>
using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    // int a{5};
    // cout << "a = " << a << endl;
    // return 0;

    string str{};
    int num{};
    cout << "Please enter a word: ";
    cin >> str;
    cout << "Please enter a number: ";
    cin >> num;
    cout << "You entered: " << str << " and " << num << endl;
    return 0;
}