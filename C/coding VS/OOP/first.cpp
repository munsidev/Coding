#include<iostream>
using namespace std;
class car{
public:
    int price;
    int milage;
    car(){
        price=4000;
        milage=15;
    }
    car(int x,int y){
        price=x;
        milage=y;
    }
    car(car &supra){
        price=supra.price;
        milage=supra.milage;
    }
    ~car(){
        cout<<"deleted object"<<endl;
    }
};
int main(){
    car* supra=new car();
    cout<<supra->price<<" "<<supra->milage<<endl;
    car GTR(1400, 20);
    cout<<GTR.price<<" "<<GTR.milage<<endl;
    car Porsche917=*supra;
    cout<<Porsche917.price<<" "<<Porsche917.milage<<endl;
    car MK5=GTR;
    cout<<MK5.price<<" "<<MK5.milage<<endl;
    delete supra;
    return 0;
}