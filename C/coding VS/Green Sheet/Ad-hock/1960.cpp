#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int n;
    cin >> n;
    
    while (n != 0) {
        if (n >= 1000) {
            x.push_back('M');
            n -= 1000;
        } else if (n >= 900) {
            x.append("CM");
            n -= 900;
        } else if (n >= 500) {
            x.push_back('D');
            n -= 500;
        } else if (n >= 400) {
            x.append("CD");
            n -= 400;
        } else if (n >= 100) {
            x.push_back('C');
            n -= 100;
        } else if (n >= 90) {
            x.append("XC");
            n -= 90;
        } else if (n >= 50) {
            x.push_back('L');
            n -= 50;
        } else if (n >= 40) {
            x.append("XL");
            n -= 40;
        } else if (n >= 10) {
            x.push_back('X');
            n -= 10;
        } else if (n >= 9) {
            x.append("IX");
            n -= 9;
        } else if (n >= 5) {
            x.push_back('V');
            n -= 5;
        } else if (n >= 4) {
            x.append("IV");
            n -= 4;
        } else if (n >= 1) {
            x.push_back('I');
            n -= 1;
        }
    }
    cout << x << endl;
    return 0;
}
