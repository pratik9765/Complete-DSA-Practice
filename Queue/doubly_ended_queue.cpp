#include <iostream>
#include <queue>
using namespace std;


class Deque{

    public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size = size;
        arr = new int[size]; 
        front = -1;
        rear = -1;
    }

    void pushRear(int data){
        // queue is full
        if((front == 0 && rear == size-1 )){
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


    void pushFront(int data){
        // queue is full
        if((front == 0 && rear == size-1)){
            cout<<"Q is full, cannot insert."<<endl;
            return;
        }
        else if(front == -1){
            // single element case
            front = rear = 0;
            arr[rear] = data;
        }
        else if(front == 0 && rear != size -1){
            // circular nature
            front = size -1;
            arr[front] = data;
        }
        else{
            front--;
            arr[front] = data;
        }
    }

    void popFront(){
        // check empty
        if(front == -1){
            cout<<"Queue is empty, cannot pop"<<endl;
            return;
        }
        else if(front == rear){
            // single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size -1){
            arr[front] = -1;
            front = 0;
        }
        else{
            arr[front] = -1;    
            front++;
        }
       
    }

    void popRear(){
        // check empty
        if(front == -1){
            cout<<"Queue is empty, cannot pop"<<endl;
            return;
        }
        else if(front == rear){
            // single element
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            arr[rear] = -1;
            rear = size - 1;
        }
        else{
            arr[rear] = -1;
            rear--;
        }
        
    }


    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";            
        }
    }
};


int main(){
    Deque dq(10);
    // dq.print();
    cout<<endl;

    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushRear(40);
    dq.pushRear(50);
    dq.pushRear(60);
    dq.pushRear(70);
    dq.pushRear(80);

    dq.print();
    cout<<endl;

    dq.popRear();
    dq.print();
    cout<<endl;

    dq.popRear();
    dq.print();
    cout<<endl;

    dq.popFront();
    dq.print();
    cout<<endl;


    dq.popFront();
    dq.print();
    cout<<endl;

    dq.pushFront(101);
    dq.print();
    cout<<endl;

    dq.pushFront(102);
    dq.print();
    cout<<endl;

    dq.pushFront(103);
    dq.print();
    cout<<endl;

    dq.popFront();
    dq.print();
    cout<<endl;

    dq.popFront();
    dq.print();
    cout<<endl;

    dq.pushRear(202);
    dq.print();
    cout<<endl;

    dq.pushRear(203);
    dq.print();
    cout<<endl;

    dq.pushRear(204);
    dq.print();
    cout<<endl;

    dq.pushRear(205);
    dq.print();
    cout<<endl;

    dq.pushRear(206);
    dq.print();
    cout<<endl;


    return 0;
}