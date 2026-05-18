#include <iostream>
using namespace std;

int main() {
	int j=0;
	long  r;
	while (cin >>r && r!=0){
		j=0;
		for(int i = 1; j+i <=r; i++){
			j +=i;
		}
		cout << j << " " << r - j << endl;
	}
	return 0;
}
