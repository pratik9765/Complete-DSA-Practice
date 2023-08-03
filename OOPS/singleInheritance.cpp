#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int weight;
    int age;

    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }

    void breakMaro(){
         cout<<"Breaking"<<endl;
    }

};

class Thar:public Car{

};

int main(){

    Thar pratikWali;
    pratikWali.speedUp();

    return 0;
}