#include <iostream>
using namespace std;

int main() {
    int length, width;
    int area;

    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;

    area = length * width;

    cout << "Area: " << area << " units." << endl;
    cout << "Here's your box: " << endl;

    for (int a = 0; a < length; a++) {
        for (int b = 0; b < width; b++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}