#include <iostream>
using namespace std;

class Animal{

    public:
    int weight;

    Animal(){
        cout<<"I am inside animal constructor"<<endl;
    }

    // virtual void speak(){
    //     cout<<"Animal is speaking"<<endl;
    // }

    void speak(){
        cout<<"Animal is speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    int age;

    // override
    void speak(){
        cout<<"Dog is barking."<<endl;
    }

    Dog(){
        cout<<"I am inside dog constructor"<<endl;
    }
};


int main(){

    // Animal a;
    // a.speak();

    // Dog d;
    // d.speak();


    // Animal* a =new Animal();
    // a->speak();

    // Dog* d = new Dog();
    // d->speak();

    // upcasting
    // Animal* a = new Dog();
    // a->speak(); 


    // downCasting
    // Dog* b = (Dog*) new Animal();
    // b->speak();

    // Animal* a = new Animal();
    // Animal* b = new Animal();
    // Dog* b = new Dog();
    Dog* a = (Dog*) new Animal();



    return 0;
}