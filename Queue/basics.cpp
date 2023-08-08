#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int>q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();

    cout<<"Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Q is empty."<<endl;
    }
    else{
        cout<<"Q is not empty."<<endl;
    }

    cout<<"front element of queue is : "<<q.front(); 

    return 0;
}