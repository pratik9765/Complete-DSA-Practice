#include <iostream>
using namespace std;

class Animal{
    private:
    int weight;
    public:
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

    // void setWeight(int w){  
    //     weight = w;
    // }
    void setWeight(int w){  
        this->weight = w;
    }

    // Constructor
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout<<"Constructor Called."<<endl;
    }

    Animal(int age){
        this->age = age;
        cout<<"Parameterised Constructor called"<<endl;
    }

    Animal(int age, int weight){
        this->age = age;
        this->weight = weight;
        cout<<"Parameterised Constructor 2 called"<<endl;
    }

    Animal(int age, int weight, string name){
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout<<"Parameterised Constructor 3 called"<<endl;
    }

    // copy constructor
    Animal(Animal& obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"I am inside copy constructor."<<endl;
    }

    void print(){
        cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
    }

    ~Animal(){
        cout<<"I am inside destructor"<<endl;
    }

};

int main(){
    // Static Memory

    // Animal Pratik;
    // Pratik.age = 28;
    // Pratik.name = "Pratik";
    // cout<<"Age of pratik is : "<<Pratik.age<<endl;
    // cout<<"Name of pratik is : "<<Pratik.name<<endl;

    // Pratik.eat();
    // Pratik.sleep();

    // Pratik.setWeight(100);

    // Pratik.getWeight();

    // cout<<"Weight is : "<<Pratik.getWeight();



    // Dynamic Memory

    // Animal* suresh = new Animal;
    // (*suresh).age = 15;
    // ((*suresh)).name= "Suru";

    // suresh->age = 20;
    // suresh->name = "Suru2";

    // (*suresh).eat();
    // (*suresh).sleep();

    // suresh->eat();
    // suresh->sleep();

    // cout<<"Age of suresh is : "<<suresh->age<<endl;

    // Animal a(10);
    // Animal* b = new Animal(100,10);
    // Animal c(10,20,"Pratik");

    // object copy
    // Animal d =a;
    // Animal f(d);

    
    // Animal a;
    // a.age = 10;
    // a.setWeight(101);
    // a.name = "Pratik";

    // Animal b =a;

    // a.print();
    // b.print();

    // a.name = "Mangesh";
    // a.print();

    // a.name[0] = 'P';
    // a.print();

    // destructor is called automatically for static memory allocation
    Animal a;
    a.age = 5;

    // we have to call destructor manually for dynamic memory allocation
    Animal* b = new Animal();
    b->age = 10;
    delete b;

   

    
    return 0;
}