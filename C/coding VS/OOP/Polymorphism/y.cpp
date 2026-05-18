#include <iostream>

void recursiveFunction() {
    cout<<"hello"<<endl;
    recursiveFunction();
}

int main() {
    recursiveFunction();
    return 0;
}
