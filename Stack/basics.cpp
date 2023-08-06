#include <iostream>
#include <stack>
using namespace std;

int main(){
    // stack<int>st;  //creation of stack

    // // insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // // remove
    // st.pop();


    // // check element on top
    // cout<<"Element on top is : "<<st.top()<<endl;

    // // size of stack
    // cout<<"Size of stack is : "<<st.size()<<endl;

    // // check for empty
    // if(st.empty()){
    //     cout << "Stack is Empty" << endl ;
    // }
    // else{
    //     cout << "Stack is not Empty" << endl ;
    // }


    stack<int>st;  //creation of stack

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    


    return 0;
}