#include <iostream>
using namespace std;
#define MAX(x,y) (x>y ? x : y)

#define PI 3.14

float areaOfCircle(float r){
    return PI * r * r;
}

float perimeterOfCricle(float r){
    return 2 * PI *r;
}

void fun(){
    int a = 4;
    int b = 5;
    int c = MAX(a,b);
    cout<<c<<endl;
}


int main(){
    cout<<areaOfCircle(5.2)<<endl;
    cout<<perimeterOfCricle(2.2)<<endl;
    fun();

    return 0;
}
