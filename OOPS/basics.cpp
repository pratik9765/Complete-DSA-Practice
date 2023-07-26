#include <iostream>
using namespace std;

class Animal{
    public:
    int weight;
    int age = 22;
    string name = "Pratik Bokde";

    void eat(){
        cout<<"Animal is Eating."<<endl;
    }

    void sleep(){
        cout<<"Animal is sleeping."<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){  
        weight = w;
    }

};

int main(){
    Animal Pratik;
    Pratik.age = 28;
    Pratik.name = "Pratik";
    cout<<"Age of pratik is : "<<Pratik.age<<endl;
    cout<<"Age of pratik is : "<<Pratik.name<<endl;

    Pratik.eat();
    Pratik.sleep();

    Pratik.setWeight(100);

    Pratik.getWeight();

    cout<<"Weight is : "<<Pratik.getWeight();

    
    return 0;
}