#include <iostream>
#include <queue>
#include <stack>
using namespace std;


void reverseK(queue<int>&q, int k){

    // step 1: queue -> k elements -> stack
    stack<int>s;
    int count = 0;
    int n = q.size();

    if(k <= 0 || k > n){
        return;
    }


    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k){
            break;
        }
    }

    // step 2: stack -> queue  elements
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // step 3: push n-k elements from front queue to back
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
    }


}



int main(){

    queue<int>q; 
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);

    reverseK(q,9);

    cout<<"Printing reverse queue : "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}