#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        
        if (x < 2) {
            cout << "Not Prime" << endl;
            continue;
        } else if (x == 2) {
            cout << "Prime" << endl;
            continue;
        }
        if (x % 2 == 0) {
            cout << "Not Prime" << endl;
            continue;
        }
        bool isPrime = true;
        long long limit = sqrt(x);
        for (long long i = 3; i <= limit; i += 2) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}

