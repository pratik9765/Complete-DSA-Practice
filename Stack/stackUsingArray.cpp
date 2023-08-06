#include <iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;  // index of top element
    int size; // size of stack 

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }


    void push(int data){
        if(size-top > 1){
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else{
            // space not available
            cout<<"Stack overflow."<<endl;
        }
    }


    void pop(){
        if(top == -1){
            // stack is empty
            cout<<"Stack is underflow"<<endl;
        }
        else{
            // stack is not empty
            top--;
        }
    }


    int getTop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
    }


    // returns number of valid elements
    int getSize(){
        return top+1;   
    }


    bool isEmpty(){
        if(top == -1){
           return true;
        }
        else {
           return false;
        }
    }

};

int main(){
    Stack s(5);

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);


    while(!s.isEmpty()){
        cout<<s.getTop() << " ";
        s.pop();
    }
    cout<<endl;

    cout<<"Size of stack is : "<<s.getSize()<<endl;

    s.pop();

    return 0;
}