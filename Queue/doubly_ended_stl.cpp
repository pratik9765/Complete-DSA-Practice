#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int>dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);

    cout<<"Size of DEque is : "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"Size of DEque is : "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"Size of DEque is : "<<dq.size()<<endl;

    cout<<"Front element is : "<<dq.front()<<endl;
    cout<<"Rear element is : "<<dq.back()<<endl;

     
    if(dq.empty()){
        cout<<"Deque is empty."<<endl;
    }
    else{
        cout<<"Deque is not empty."<<endl;
    }
    return 0;
}