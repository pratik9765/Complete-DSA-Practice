#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int>&q){
    stack<int>s;
    // step 1: push all elements of q into s
    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);
    }

    // step 2: put all elements from stack to queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}


void reverseQueueRecursion(queue<int>&q){
    // base case
    if(q.empty()){
        return;
    }

    // stap 1
    int temp = q.front();
    q.pop();

    // step 2:
    reverseQueueRecursion(q);

    // step 3
    q.push(temp);
}



int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    // reverseQueue(q);
    reverseQueueRecursion(q);

    cout<<"Printing reverse queue : "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}
