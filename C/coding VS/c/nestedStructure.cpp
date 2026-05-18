#include<stdio.h>
struct car{
    int speed;
    float price;
};
struct superCar{
    struct car baseCar;
    int nitroSpeed;
};
struct legenderyCar{
    struct superCar super;
    int shockWave;
};
int main(){
    struct legenderyCar bmw;
    bmw.super.baseCar.speed=4000;
    
    return 0;
}