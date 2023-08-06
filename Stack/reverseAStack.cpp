#include <iostream>
#include <stack>
using namespace std;


void solve(stack<int>&s,int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    // recursive call
    solve(s,target);

    // backtrack
    s.push(topElement);
}



void insertAtBottom(stack<int>&s, int target){

    // base call
    if(s.empty()){
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s,target);

    // backtrack
    s.push(topElement);
}



void reverseStack(stack<int>&s){

    // base case
    if(s.empty()){
        return;
    }
    
    int target = s.top();
    s.pop();

    // recursive call
    reverseStack(s);

    // insert at bottom
    insertAtBottom(s,target);
}



int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl; 

    return 0;
}