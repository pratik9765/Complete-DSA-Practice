#include <iostream>
using namespace std;

class Car{
    public:
    int model;
    int price;
    int weight;

    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
};

class Tata:public Car{
};

class MG:public Car{
};


int main(){
    Tata t1;
    t1.speedUp();

    MG m1;
    m1.speedUp();

    return 0;
}