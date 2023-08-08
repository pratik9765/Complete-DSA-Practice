#include <iostream>
#include <queue>
using namespace std;

class CQueue{
    public: 
    int size;
    int *arr;
    int front;
    int rear;

    CQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }


    void push(int data){
        // queue is full
        if((front == 0 && rear == size-1 && front == rear +1)){
            cout<<"Q is full, cannot insert."<<endl;
            return;
        }
        else if(front == -1){
            // single element case
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size - 1 && front != 0){
            // circular nature
            rear = 0;
            arr[rear] = data; 
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }


    void pop(){
        // check empty
        if(front == -1){
            cout<<"Queue is empty, cannot pop"<<endl;
        }
        else if(front == rear){
            // single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size -1){
            front = 0;
        }
        else{
            front++;
        }
    }

};


int main(){


    return 0;
}