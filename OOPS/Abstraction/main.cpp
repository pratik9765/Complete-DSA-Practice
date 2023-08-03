#include <iostream>
#include "bird.h" 
using namespace std;

void birdDoesSomething(Bird *&bird){
    bird->fly();
    bird->eat();
    bird->fly();

}

int main(){
    // Bird*bird = new sparrow();
     Bird*bird = new pegion();
    birdDoesSomething(bird);


    return 0;
}