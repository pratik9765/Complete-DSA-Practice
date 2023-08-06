#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> prevSmallerElement(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());

    // left to right
    for(int i=0;i<input.size();i++){
        int currElement = input[i];

        while(s.top()>= currElement){
            s.pop();
        }

        // chotta element mil gaya 
        ans[i] = s.top();
          
        // push curr element
        s.push(currElement);
    }
    return ans;

}




int main(){

    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int>ans = prevSmallerElement(input);
    cout<<"Printing "<<endl;
    for(int i=0;i<input.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}