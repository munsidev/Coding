#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--) {
        int y=3;
        int x;
        cin >> x;
        double CreditS = 0.0;
        double totalGrad = 0.0, cgpa=0;
        int fail = 0;
        for (int i = 0; i < x; i++) {
            double num, credit, Point;
            cin >> num >> credit;
            if (num >= 80){
                Point = 4.00;
            }
            else if (num>= 75){
                Point = 3.75;
            }
            else if (num >= 70){
                Point = 3.50;
            }
            else if (num >= 65){
                Point = 3.25;
            }
            else if (num >= 60){
                Point = 3.00;
            }
            else if (num >= 55){
                Point = 2.75;
            }
            else if (num >= 50){
                Point = 2.50;
            }
            else if (num >= 45){
                Point = 2.25;
            }
            else if (num >= 40){
                Point = 2.00;
            }
            else {
                Point = 0.00;
            if(Point==0){
                fail++;
            }
        }
        CreditS += credit;
            totalGrad += (Point * credit);
        cgpa = totalGrad / CreditS;
        }
        cout << "Case " << x-(y--) << ": ";
        if (fail == 1)
            cout << "Sorry, you have failed in 1 course!" << endl;
        else if (fail > 1)
            cout << "Sorry, you have failed in " << fail << " courses!" << endl;
        else
            printf("%.2f\n", cgpa);
    }
    return 0;
}
